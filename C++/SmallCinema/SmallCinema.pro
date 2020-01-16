QT       += core gui
QT       += sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    db_mapping/adultsticket.cpp \
    db_mapping/childrenticket.cpp \
    core/databasehandler.cpp \
    db_mapping/employee.cpp \
    db_mapping/hall.cpp \
    db_mapping/language.cpp \
    main.cpp \
    ui/adminwindow.cpp \
    ui/cashierwindow.cpp \
    ui/loginscreen.cpp \
    db_mapping/movie.cpp \
    db_mapping/reservation.cpp \
    db_mapping/showtime.cpp \
    db_mapping/studentsticket.cpp \
    db_mapping/ticket.cpp

HEADERS += \
    db_mapping/adultsticket.h \
    db_mapping/childrenticket.h \
    core/databasehandler.h \
    db_mapping/employee.h \
    db_mapping/hall.h \
    db_mapping/language.h \
    ui/adminwindow.h \
    ui/cashierwindow.h \
    ui/loginscreen.h \
    db_mapping/movie.h \
    db_mapping/reservation.h \
    db_mapping/showtime.h \
    db_mapping/studentsticket.h \
    db_mapping/ticket.h

FORMS += \
    ui/adminwindow.ui \
    ui/cashierwindow.ui \
    ui/loginscreen.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
