#include "databasehandler.h"
#include <QSqlQuery>
#include <QDebug>
#include "db_mapping/childrenticket.h"
#include "db_mapping/adultsticket.h"
#include "db_mapping/studentsticket.h"
#include "db_mapping/ticket.h"
#include "db_mapping/movie.h"
#include "db_mapping/hall.h"


DatabaseHandler* DatabaseHandler::m_Instance = nullptr;

DatabaseHandler *DatabaseHandler::Instance()
{
    if (!m_Instance){   // Only allow one instance of class to be generated.
        m_Instance = new DatabaseHandler;
        m_Instance->Connect("../../Django/SmallCinema/db.sqlite3");
    }
    return m_Instance;
}

bool DatabaseHandler::IsConnected()
{
    return m_Instance->db.open();
}

std::vector<Reservation> DatabaseHandler::GetAllReservations()
{
    std::vector<Reservation> list;
    m_Instance->db.open();
    QSqlQuery query(m_Instance->db);
    query.exec("SELECT * FROM SmallCinemaApp_reservation");
    while (query.next()) {
        Reservation* obj = new Reservation();
        obj->id = query.value(0).toInt();
        obj->name = query.value(1).toString();
        obj->surname = query.value(2).toString();
        obj->email = query.value(3).toString();
        obj->phone = query.value(4).toInt();
        obj->code = query.value(5).toString();
        obj->showtime_id = query.value(6).toInt();
        obj->seat = query.value(7).toInt();
        list.push_back(*obj);
    }
    m_Instance->db.close();
    return list;
}

std::vector<Showtime> DatabaseHandler::GetAllShowtimes()
{
    std::vector<Showtime> list;
    m_Instance->db.open();
    QSqlQuery query(m_Instance->db);
    query.exec("SELECT * FROM SmallCinemaApp_showtime");
    while (query.next()) {
        Showtime* obj = new Showtime();
        obj->id = query.value(0).toInt();
        obj->price = query.value(1).toDouble();
        obj->datetime = query.value(2).toDateTime();
        obj->hall_id = query.value(3).toInt();
        obj->movie_id = query.value(4).toInt();
        list.push_back(*obj);
    }
    m_Instance->db.close();
    return list;
}

std::vector<Ticket> DatabaseHandler::GetAllTickets()
{
    std::vector<Ticket> list;
    m_Instance->db.open();
    QSqlQuery query(m_Instance->db);
    query.exec("SELECT * FROM SmallCinemaApp_childrenticket");
    while (query.next()) {
        ChildrenTicket* obj = new ChildrenTicket();
        obj->id = query.value(0).toInt();
        obj->price = query.value(1).toDouble();
        obj->name = query.value(2).toString();
        obj->surname = query.value(3).toString();
        obj->dateOfBirth = query.value(7).toDate();
        obj->discount = query.value(4).toDouble();
        obj->showtime_id = query.value(5).toInt();
        obj->seat = query.value(6).toInt();
        list.push_back(*obj);
    }
    query.clear();
    query.exec("SELECT * FROM SmallCinemaApp_adultsticket");
    while (query.next()) {
        AdultsTicket* obj = new AdultsTicket();
        obj->id = query.value(0).toInt();
        obj->price = query.value(1).toDouble();
        obj->seat = query.value(2).toInt();
        obj->name = query.value(3).toString();
        obj->surname = query.value(4).toString();
        obj->showtime_id = query.value(5).toInt();
        list.push_back(*obj);
    }
    query.clear();
    query.exec("SELECT * FROM SmallCinemaApp_studentsticket");
    while (query.next()) {
        StudentsTicket* obj = new StudentsTicket();
        obj->id = query.value(0).toInt();
        obj->price = query.value(1).toDouble();
        obj->name = query.value(2).toString();
        obj->surname = query.value(3).toString();
        obj->studentsNumber = query.value(7).toString();
        obj->discount = query.value(4).toDouble();
        obj->showtime_id = query.value(5).toInt();
        obj->seat = query.value(6).toInt();
        list.push_back(*obj);
    }
    m_Instance->db.close();
    return list;
}

std::vector<int> DatabaseHandler::GetTakenSeats(int showtime_id)
{
    std::vector<int> list;
    m_Instance->db.open();
    QSqlQuery query(m_Instance->db);
    query.exec("SELECT seat FROM SmallCinemaApp_reservation WHERE showtime_id=" + QString::number(showtime_id));
    while (query.next()) {
        list.push_back(query.value(0).toInt());
    }
    query.clear();
    query.exec("SELECT seat FROM SmallCinemaApp_adultsticket WHERE showtime_id=" + QString::number(showtime_id));
    while (query.next()) {
        list.push_back(query.value(0).toInt());
    }
    query.clear();
    query.exec("SELECT seat FROM SmallCinemaApp_childrenticket WHERE showtime_id=" + QString::number(showtime_id));
    while (query.next()) {
        list.push_back(query.value(0).toInt());
    }
    query.clear();
    query.exec("SELECT seat FROM SmallCinemaApp_studentsticket WHERE showtime_id=" + QString::number(showtime_id));
    while (query.next()) {
        list.push_back(query.value(0).toInt());
    }
    m_Instance->db.close();
    return list;
}

Showtime DatabaseHandler::GetShowtime(int id)
{
    m_Instance->db.open();
    QSqlQuery query(m_Instance->db);
    query.exec("SELECT * FROM SmallCinemaApp_showtime where id=" + QString::number(id));
    Showtime* obj = new Showtime();
    while (query.next()) {
        obj->id = query.value(0).toInt();
        obj->price = query.value(1).toDouble();
        obj->datetime = query.value(2).toDateTime();
        obj->hall_id = query.value(3).toInt();
        obj->movie_id = query.value(4).toInt();
    }
    m_Instance->db.close();
    return *obj;
}

Movie DatabaseHandler::GetMovie(int id)
{
    m_Instance->db.open();
    QSqlQuery query(m_Instance->db);
    query.exec("SELECT * FROM SmallCinemaApp_movie where id=" + QString::number(id));
    Movie* obj = new Movie();
    while (query.next()) {
        obj->id = query.value(0).toInt();
        obj->name = query.value(1).toString();
        obj->length = query.value(2).toInt();
        obj->rating = query.value(3).toDouble();
        obj->description = query.value(4).toString();
        obj->language_id = query.value(4).toInt();

    }
    m_Instance->db.close();
    return *obj;
}

Hall DatabaseHandler::GetHall(int id)
{
    m_Instance->db.open();
    QSqlQuery query(m_Instance->db);
    query.exec("SELECT * FROM SmallCinemaApp_hall where id=" + QString::number(id));
    Hall* obj = new Hall();
    while (query.next()) {
        obj->id = query.value(0).toInt();
        obj->name = query.value(1).toString();
        obj->description = query.value(2).toString();
    }
    m_Instance->db.close();
    return *obj;
}

Reservation DatabaseHandler::GetReservation(int id)
{
    m_Instance->db.open();
    QSqlQuery query(m_Instance->db);
    query.exec("SELECT * FROM SmallCinemaApp_reservation where id=" + QString::number(id));
    Reservation* obj = new Reservation();
    while (query.next()) {
        obj->id = query.value(0).toInt();
        obj->name = query.value(1).toString();
        obj->surname = query.value(2).toString();
        obj->email = query.value(3).toString();
        obj->phone = query.value(4).toInt();
        obj->code = query.value(5).toString();
        obj->showtime_id = query.value(6).toInt();
        obj->seat = query.value(7).toInt();
    }
    m_Instance->db.close();
    return *obj;
}

std::vector<Reservation> DatabaseHandler::GetReservations(QString code)
{
    std::vector<Reservation> list;
    m_Instance->db.open();
    QSqlQuery query(m_Instance->db);
    query.exec("SELECT * FROM SmallCinemaApp_reservation WHERE code='" + code +"'");
    while (query.next()) {
        Reservation* obj = new Reservation();
        obj->id = query.value(0).toInt();
        obj->name = query.value(1).toString();
        obj->surname = query.value(2).toString();
        obj->email = query.value(3).toString();
        obj->phone = query.value(4).toInt();
        obj->code = query.value(5).toString();
        obj->showtime_id = query.value(6).toInt();
        obj->seat = query.value(7).toInt();
        list.push_back(*obj);
    }
    m_Instance->db.close();
    return list;
}

void DatabaseHandler::AddChildrenTicket(ChildrenTicket c)
{
    m_Instance->db.open();
    QSqlQuery query;
    query.prepare("INSERT INTO SmallCinemaApp_childrenticket "
                  "(id, price, name, surname, dateOfBirth, discount, showtime_id, seat) "
                  "VALUES (:id, :price, :name, :surname, :dateOfBirth, :discount, :showtime_id, :seat)");
    query.bindValue(":id", NULL);
    query.bindValue(":price", c.price);
    query.bindValue(":name", c.name);
    query.bindValue(":surname", c.surname);
    query.bindValue(":dateOfBirth", NULL);
    query.bindValue(":discount", c.discount);
    query.bindValue(":showtime_id", c.showtime_id);
    query.bindValue(":seat", c.seat);
    query.exec();
    m_Instance->db.close();
}

void DatabaseHandler::AddStudentsTicket(StudentsTicket s)
{
    m_Instance->db.open();
    QSqlQuery query;
    query.prepare("INSERT INTO SmallCinemaApp_studentsticket "
                  "(id, price, name, surname, studentsNumber, discount, showtime_id, seat) "
                  "VALUES (:id, :price, :name, :surname, :studentsNumber, :discount, :showtime_id, :seat)");
    query.bindValue(":id", NULL);
    query.bindValue(":dateOfBirth", s.studentsNumber);
    query.bindValue(":discount", s.discount);
    query.bindValue(":price", s.price);
    query.bindValue(":seat", s.seat);
    query.bindValue(":name", s.name);
    query.bindValue(":surname", s.surname);
    query.bindValue(":showtime_id", s.showtime_id);
    query.exec();
    m_Instance->db.close();
}

void DatabaseHandler::AddAdultsTicket(AdultsTicket t)
{
    m_Instance->db.open();
    QSqlQuery query;
    query.prepare("INSERT INTO SmallCinemaApp_adultsticket "
                  "(id, price, seat, name, surname, showtime_id) "
                  "VALUES (:id, :price, :seat, :name, :surname, :showtime_id)");
    query.bindValue(":id", NULL);
    query.bindValue(":price", t.price);
    query.bindValue(":seat", t.seat);
    query.bindValue(":name", t.name);
    query.bindValue(":surname", t.surname);
    query.bindValue(":showtime_id", t.showtime_id);
    query.exec();
    m_Instance->db.close();
}

void DatabaseHandler::Connect(QString dbPath)
{
    m_Instance->db = QSqlDatabase::addDatabase("QSQLITE");
    m_Instance->db.setDatabaseName(dbPath);
}

