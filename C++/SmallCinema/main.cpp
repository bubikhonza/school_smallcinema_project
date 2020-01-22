#include "ui/loginscreen.h"
#include "core/databasehandler.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    LoginScreen l;
    l.show();
    return a.exec();
}
