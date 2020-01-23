#ifndef DATABASEHANDLER_H
#define DATABASEHANDLER_H
#include <string>
#include <QSqlDatabase>
#include <QString>
#include "db_mapping/reservation.h"
#include "db_mapping/ticket.h"
#include "db_mapping/adultsticket.h"
#include "db_mapping/studentsticket.h"
#include "db_mapping/childrenticket.h"
#include "db_mapping/showtime.h"
#include "db_mapping/movie.h"
#include "db_mapping/hall.h"

#include "vector"

class DatabaseHandler
{
public:
    static DatabaseHandler* Instance();
    bool IsConnected();
    std::vector<Reservation> GetAllReservations();
    std::vector<Showtime> GetAllShowtimes();
    std::vector<Ticket> GetAllTickets();
    std::vector<int> GetTakenSeats(int showtime_id);
    Showtime GetShowtime(int id);
    Movie GetMovie(int id);
    Hall GetHall(int id);

    Reservation GetReservation(int id);
    std::vector<Reservation> GetReservations(QString code);

    void AddAdultsTicket(AdultsTicket t);
    void AddChildrenTicket(ChildrenTicket c);
    void AddStudentsTicket(StudentsTicket s);
    void RemoveReservations(QString code);

    //other methods

private:
    DatabaseHandler(){};
    DatabaseHandler(DatabaseHandler const&){};
    DatabaseHandler& operator=(DatabaseHandler const&){};
    static DatabaseHandler* m_Instance;
    QSqlDatabase db;
    void Connect(QString dbPath);

};

#endif // DATABASEHANDLER_H
