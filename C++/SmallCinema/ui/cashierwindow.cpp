#include "cashierwindow.h"
#include "ui_cashierwindow.h"
#include "core/databasehandler.h"
#include "QDebug"
#include "QString"
#include <algorithm>
#include <sstream>
#include <iterator>
#include "QWidget"
#include "db_mapping/adultsticket.h"
#include "db_mapping/childrenticket.h"
#include "db_mapping/studentsticket.h"

CashierWindow::CashierWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CashierWindow)
{
    ui->setupUi(this);
}

CashierWindow::~CashierWindow()
{
    delete ui;
}

void CashierWindow::getTickets()
{
    this->ticketList = DatabaseHandler::Instance()->GetAllTickets();
    ui->tickets_table->setRowCount(0);
    int row=0;
    foreach(auto ticket, ticketList){
        ui->tickets_table->insertRow( ui->tickets_table->rowCount() );
        ui->tickets_table->setItem(row, 0, new QTableWidgetItem(ticket.surname));
        ui->tickets_table->setItem(row, 1, new QTableWidgetItem(QString::number(ticket.seat)));
        ui->tickets_table->setItem(row, 2, new QTableWidgetItem(QString::number(ticket.price)));
        row++;
    }
}

void CashierWindow::getReservations()
{
    this->reservationList = DatabaseHandler::Instance()->GetAllReservations();
    ui->reservations_table->setRowCount(0);
    int row=0;
    foreach(auto res, reservationList){
        if(res.processed)
            continue;
        ui->reservations_table->insertRow( ui->reservations_table->rowCount() );
        ui->reservations_table->setItem(row, 0, new QTableWidgetItem(res.surname));
        ui->reservations_table->setItem(row, 1, new QTableWidgetItem(res.email));
        ui->reservations_table->setItem(row, 2, new QTableWidgetItem(QString::number(res.seat)));
        row++;
    }
}

void CashierWindow::getShowtimes()
{
    this->showtimeList = DatabaseHandler::Instance()->GetAllShowtimes();
    ui->showtimes_table->setRowCount(0);
    int row=0;
    foreach(auto show, showtimeList){
        ui->showtimes_table->insertRow( ui->showtimes_table->rowCount() );
        ui->showtimes_table->setItem(row, 0, new QTableWidgetItem(DatabaseHandler::Instance()->GetMovie(show.movie_id).name));
        ui->showtimes_table->setItem(row, 1, new QTableWidgetItem(DatabaseHandler::Instance()->GetHall(show.hall_id).name));
        ui->showtimes_table->setItem(row, 2, new QTableWidgetItem(show.datetime.toString()));
        row++;
    }
}

void CashierWindow::getTakenSeats(int showtime_id)
{
    auto seats = DatabaseHandler::Instance()->GetTakenSeats(showtime_id);

    std::ostringstream vts;

      if (!seats.empty())
      {
        // Convert all but the last element to avoid a trailing ","
        std::copy(seats.begin(), seats.end()-1,
            std::ostream_iterator<int>(vts, ", "));

        // Now add the last element with no delimiter
        vts << seats.back();
      }

    ui->taken_seats_text->setText("TAKEN SEATS: " + QString::fromStdString(vts.str()));
}

void CashierWindow::fillShowCombo()
{
    ui->show_combo->clear();
    ui->showtime_combobox->clear();
    this->showtimeList = DatabaseHandler::Instance()->GetAllShowtimes();
    foreach(auto show, showtimeList){
        auto movie = DatabaseHandler::Instance()->GetMovie(show.movie_id);
        auto hall = DatabaseHandler::Instance()->GetHall(show.hall_id);
        auto s = movie.name + ", " + hall.name + ", " + show.datetime.toString();
        ui->show_combo->addItem(s);
        ui->showtime_combobox->addItem(s);
    }
}

void CashierWindow::update(){
    getReservations();
    getTickets();
    getShowtimes();
    fillShowCombo();
}

void CashierWindow::on_show_combo_activated(int index)
{
    auto show = DatabaseHandler::Instance()->GetAllShowtimes().at(index);
    getTakenSeats(show.id);
}

void CashierWindow::on_process_btn_clicked()
{
    if(ui->reservations_table->selectedItems().size() > 0){
        auto selected = ui->reservations_table->selectedItems();
        auto code = this->reservationList.at(selected.at(0)->row()).code;

        auto reservations = DatabaseHandler::Instance()->GetReservations(code);

        //creating seats vec
        std::vector<int> seats;
        foreach(auto r, reservations){
            seats.push_back(r.seat);
        }

        //creating seats string
        std::ostringstream vts;
        if (!seats.empty())
        {
            std::copy(seats.begin(), seats.end()-1,std::ostream_iterator<int>(vts, ", "));
            vts << seats.back();
        }
        ui->name_input->setText(reservations.at(0).name);
        ui->surname_input->setText(reservations.at(0).surname);
        ui->email_input->setText(reservations.at(0).email);
        ui->seats_input->setText(QString::fromStdString(vts.str()));
        ui->showtime_combobox->setCurrentIndex(reservations.at(0).showtime_id - 1);
        ui->noadults_input->setText(QString::number(reservations.size()));
        ui->nochildren_input->setText(QString::number(0));
        ui->nostudents_input->setText(QString::number(0));

        ui->tabWidget->setCurrentIndex(4);
        codeInProcess = code;
    }
    updatePrice();
}

void CashierWindow::on_add_ticket_clicked()
{
    int noadults = ui->noadults_input->text().toInt();
    int nochildren = ui->nochildren_input->text().toInt();
    int nostudents = ui->nostudents_input->text().toInt();

    Showtime showtime = DatabaseHandler::Instance()->GetAllShowtimes().at(ui->showtime_combobox->currentIndex());
    //seats from input to vector
    std::string str = ui->seats_input->text().toStdString();
    std::replace(str.begin(), str.end(), ',', ' ');
    std::vector<int> seats;
    std::stringstream ss(str);
    int temp;
    while (ss >> temp)
        seats.push_back(temp);

    if(!isBookable(seats, showtime.id)){
        return;
    }
    for(int i = 0; i < noadults; i++){
        AdultsTicket *a = new AdultsTicket();
        a->name = ui->name_input->text();
        a->seat = seats.back();
        seats.pop_back();
        a->price = showtime.price;
        a->surname = ui->surname_input->text();
        a->showtime_id = showtime.id;
        DatabaseHandler::Instance()->AddAdultsTicket(*a);
    }
    for(int i = 0; i < nochildren; i++){
        ChildrenTicket *c = new ChildrenTicket();
        c->name = ui->name_input->text();
        c->seat = seats.back();
        seats.pop_back();
        c->discount = 0.5;
        c->price = showtime.price * (1 - c->discount);
        c->surname = ui->surname_input->text();
        c->showtime_id = showtime.id;
        DatabaseHandler::Instance()->AddChildrenTicket(*c);
    }
    for(int i = 0; i < nostudents; i++){
        StudentsTicket *s = new StudentsTicket();
        s->name = ui->name_input->text();
        s->seat = seats.back();
        seats.pop_back();
        s->discount = 0.2;
        s->price = showtime.price * (1 - s->discount);
        s->surname = ui->surname_input->text();
        s->showtime_id = showtime.id;
        DatabaseHandler::Instance()->AddStudentsTicket(*s);
    }
    DatabaseHandler::Instance()->RemoveReservations(codeInProcess);
    this->update();

}
void CashierWindow::on_pushButton_clicked(){

}


void CashierWindow::updatePrice()
{
    int noadults = ui->noadults_input->text().toInt();
    int nochildren = ui->nochildren_input->text().toInt();
    int nostudents = ui->nostudents_input->text().toInt();
    int finalPrice = 0;
    Showtime showtime = DatabaseHandler::Instance()->GetAllShowtimes().at(ui->showtime_combobox->currentIndex());
    ui->price_table->clear();
    for(int i = 1; i <= noadults; i++){
        std::string str = "Adult_" + std::to_string(i) + ":            " + std::to_string(showtime.price);
        finalPrice += showtime.price;
        ui->price_table->append(QString::fromStdString(str));
    }
    for(int i = 1; i <= nochildren; i++){
        std::string str = "Children_" + std::to_string(i) + ":         " + std::to_string(showtime.price * 0.5);
        finalPrice += showtime.price * 0.5;
        ui->price_table->append(QString::fromStdString(str));
    }
    for(int i = 1; i <= nostudents; i++){
        std::string str = "Student_" + std::to_string(i) + ":          " + std::to_string(showtime.price * 0.2);
        finalPrice += showtime.price * 0.2;
        ui->price_table->append(QString::fromStdString(str));
    }
    ui->price_table->append(QString::fromStdString("--------------------------------"));

    ui->price_table->append(QString::fromStdString("ALL:                " + std::to_string(finalPrice)));
}

bool CashierWindow::isBookable(std::vector<int> seats, int showtimeId)
{
    auto clone = seats;
    sort( clone.begin(), clone.end() );
    clone.erase( unique( clone.begin(), clone.end() ), clone.end() );
    if(clone.size() != seats.size())
        return false;

    foreach(auto seat, seats){
        auto tickets = DatabaseHandler::Instance()->GetAllTickets();
        foreach (auto ticket, tickets){
            if(ticket.seat == seat && ticket.showtime_id == showtimeId)
                return false;
        }
    }
    return true;
}

void CashierWindow::on_nochildren_input_textEdited(const QString &arg1)
{
    updatePrice();
}

void CashierWindow::on_noadults_input_textEdited(const QString &arg1)
{
    updatePrice();

}

void CashierWindow::on_nostudents_input_textEdited(const QString &arg1)
{
    updatePrice();
}


void CashierWindow::on_tabWidget_tabBarClicked(int index)
{
    //getTakenSeats(ui->show_combo->currentIndex());
}
