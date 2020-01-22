#ifndef TICKET_H
#define TICKET_H
#include "QString"

class Ticket
{
public:
    Ticket();
    virtual ~Ticket() = default;

    int id;
    double price;
    QString name;
    QString surname;
    int seat;

    //fk
    int showtime_id;
};

#endif // TICKET_H
