#ifndef MOVIE_H
#define MOVIE_H
#include "QString"

class Movie
{
public:
    Movie();
    int id;
    QString name;
    int length;
    double rating;
    QString description;

    //fk
    int language_id;

};

#endif // MOVIE_H
