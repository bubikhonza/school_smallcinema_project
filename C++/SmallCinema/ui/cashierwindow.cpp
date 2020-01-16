#include "cashierwindow.h"
#include "ui_cashierwindow.h"
#include "core/databasehandler.h"
#include "QDebug"
#include "QString"
#include <algorithm>
#include <sstream>
#include <iterator>
#include "QWidget"

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
    }

}
