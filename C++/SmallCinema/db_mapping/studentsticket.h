#ifndef STUDENTSTICKET_H
#define STUDENTSTICKET_H
#include "ticket.h"

class StudentsTicket : public Ticket
{
public:
    StudentsTicket();
    QString studentsNumber;
    double discount;
};

#endif // STUDENTSTICKET_H
