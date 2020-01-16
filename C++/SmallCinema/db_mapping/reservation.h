#ifndef RESERVATION_H
#define RESERVATION_H
#include "QString"

class Reservation
{
public:
    Reservation();
    int id;
    QString name;
    QString surname;
    QString email;
    int phone;
    QString code;
    int seat;
    bool processed = false;
    //fk
    int showtime_id;
};

#endif // RESERVATION_H
