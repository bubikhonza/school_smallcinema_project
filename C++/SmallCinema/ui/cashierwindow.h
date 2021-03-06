#ifndef CASHIERWINDOW_H
#define CASHIERWINDOW_H

#include <QDialog>
#include <vector>
#include "db_mapping/reservation.h"
#include "db_mapping/showtime.h"
#include "db_mapping/ticket.h"

namespace Ui {
class CashierWindow;
}

class CashierWindow : public QDialog
{
    Q_OBJECT

public:
    explicit CashierWindow(QWidget *parent = nullptr);
    ~CashierWindow();
    void update();
    QString codeInProcess;

private slots:
    void on_show_combo_activated(int index);

    void on_process_btn_clicked();

    void on_pushButton_clicked();

    void on_add_ticket_clicked();

    void on_nochildren_input_textEdited(const QString &arg1);

    void on_noadults_input_textEdited(const QString &arg1);

    void on_nostudents_input_textEdited(const QString &arg1);

    void on_tabWidget_tabBarClicked(int index);

private:
    Ui::CashierWindow *ui;
    std::vector<Reservation> reservationList;
    std::vector<Showtime> showtimeList;
    std::vector<Ticket> ticketList;

    void getTickets();
    void getReservations();
    void getShowtimes();
    void getTakenSeats(int showtime_id);
    void fillShowCombo();
    void updatePrice();
    bool isBookable(std::vector<int> seats, int showtimeId);
};

#endif // CASHIERWINDOW_H
