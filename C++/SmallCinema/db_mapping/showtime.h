#ifndef SHOWTIME_H
#define SHOWTIME_H
#include "QDateTime"

class Showtime
{
public:
    Showtime();
    int id;
    double price;
    QDateTime datetime;

    //fk
    int hall_id;
    int movie_id;
};

#endif // SHOWTIME_H
