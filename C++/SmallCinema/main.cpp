#include "ui/loginscreen.h"
#include "core/databasehandler.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    DatabaseHandler::Instance()->GetAllReservations();
    LoginScreen l;
    l.show();
    return a.exec();
}
