#ifndef CHILDRENTICKET_H
#define CHILDRENTICKET_H
#include <QDateTime>
#include "ticket.h"

class ChildrenTicket : public Ticket
{
public:
    ChildrenTicket();
    QDate dateOfBirth;
    double discount;
};

#endif // CHILDRENTICKET_H
