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

private slots:
    void on_show_combo_activated(int index);

    void on_process_btn_clicked();

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
};

#endif // CASHIERWINDOW_H
