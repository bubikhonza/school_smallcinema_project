/********************************************************************************
** Form generated from reading UI file 'cashierwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CASHIERWINDOW_H
#define UI_CASHIERWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CashierWindow
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QTabWidget *tabWidget;
    QWidget *showtimes_tab;
    QWidget *gridLayoutWidget_6;
    QGridLayout *gridLayout_6;
    QTableWidget *showtimes_table;
    QWidget *reservations_tab;
    QWidget *gridLayoutWidget_7;
    QGridLayout *gridLayout_7;
    QTableWidget *reservations_table;
    QPushButton *process_btn;
    QWidget *tickets_tab;
    QWidget *gridLayoutWidget_5;
    QGridLayout *gridLayout_5;
    QTableWidget *tickets_table;
    QWidget *halls_tab;
    QWidget *gridLayoutWidget_3;
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout_4;
    QComboBox *show_combo;
    QTableWidget *tableWidget;
    QTextBrowser *taken_seats_text;
    QWidget *add_ticket_tab;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QTextBrowser *price_table;
    QLabel *label_2;
    QLineEdit *noadults_input;
    QLineEdit *nochildren_input;
    QLineEdit *surname_input;
    QLineEdit *seats_input;
    QLabel *label_13;
    QLabel *label_3;
    QLabel *label_5;
    QLineEdit *name_input;
    QLabel *label;
    QLineEdit *nostudents_input;
    QComboBox *showtime_combobox;
    QLabel *label_6;
    QLineEdit *email_input;
    QLabel *label_7;
    QPushButton *add_ticket;
    QLabel *label_4;

    void setupUi(QDialog *CashierWindow)
    {
        if (CashierWindow->objectName().isEmpty())
            CashierWindow->setObjectName(QString::fromUtf8("CashierWindow"));
        CashierWindow->resize(1067, 733);
        gridLayoutWidget = new QWidget(CashierWindow);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(9, 9, 1051, 721));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        tabWidget = new QTabWidget(gridLayoutWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        showtimes_tab = new QWidget();
        showtimes_tab->setObjectName(QString::fromUtf8("showtimes_tab"));
        gridLayoutWidget_6 = new QWidget(showtimes_tab);
        gridLayoutWidget_6->setObjectName(QString::fromUtf8("gridLayoutWidget_6"));
        gridLayoutWidget_6->setGeometry(QRect(9, 9, 1031, 681));
        gridLayout_6 = new QGridLayout(gridLayoutWidget_6);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        gridLayout_6->setContentsMargins(0, 0, 0, 0);
        showtimes_table = new QTableWidget(gridLayoutWidget_6);
        if (showtimes_table->columnCount() < 3)
            showtimes_table->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        showtimes_table->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        showtimes_table->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        showtimes_table->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        showtimes_table->setObjectName(QString::fromUtf8("showtimes_table"));

        gridLayout_6->addWidget(showtimes_table, 0, 0, 1, 1);

        tabWidget->addTab(showtimes_tab, QString());
        reservations_tab = new QWidget();
        reservations_tab->setObjectName(QString::fromUtf8("reservations_tab"));
        gridLayoutWidget_7 = new QWidget(reservations_tab);
        gridLayoutWidget_7->setObjectName(QString::fromUtf8("gridLayoutWidget_7"));
        gridLayoutWidget_7->setGeometry(QRect(9, 9, 1031, 681));
        gridLayout_7 = new QGridLayout(gridLayoutWidget_7);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        gridLayout_7->setContentsMargins(0, 0, 0, 0);
        reservations_table = new QTableWidget(gridLayoutWidget_7);
        if (reservations_table->columnCount() < 3)
            reservations_table->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        reservations_table->setHorizontalHeaderItem(0, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        reservations_table->setHorizontalHeaderItem(1, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        reservations_table->setHorizontalHeaderItem(2, __qtablewidgetitem5);
        reservations_table->setObjectName(QString::fromUtf8("reservations_table"));

        gridLayout_7->addWidget(reservations_table, 0, 0, 1, 1);

        process_btn = new QPushButton(gridLayoutWidget_7);
        process_btn->setObjectName(QString::fromUtf8("process_btn"));

        gridLayout_7->addWidget(process_btn, 1, 0, 1, 1);

        tabWidget->addTab(reservations_tab, QString());
        tickets_tab = new QWidget();
        tickets_tab->setObjectName(QString::fromUtf8("tickets_tab"));
        gridLayoutWidget_5 = new QWidget(tickets_tab);
        gridLayoutWidget_5->setObjectName(QString::fromUtf8("gridLayoutWidget_5"));
        gridLayoutWidget_5->setGeometry(QRect(10, 10, 1031, 681));
        gridLayout_5 = new QGridLayout(gridLayoutWidget_5);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        tickets_table = new QTableWidget(gridLayoutWidget_5);
        if (tickets_table->columnCount() < 3)
            tickets_table->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tickets_table->setHorizontalHeaderItem(0, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tickets_table->setHorizontalHeaderItem(1, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tickets_table->setHorizontalHeaderItem(2, __qtablewidgetitem8);
        tickets_table->setObjectName(QString::fromUtf8("tickets_table"));

        gridLayout_5->addWidget(tickets_table, 0, 0, 1, 1);

        tabWidget->addTab(tickets_tab, QString());
        halls_tab = new QWidget();
        halls_tab->setObjectName(QString::fromUtf8("halls_tab"));
        gridLayoutWidget_3 = new QWidget(halls_tab);
        gridLayoutWidget_3->setObjectName(QString::fromUtf8("gridLayoutWidget_3"));
        gridLayoutWidget_3->setGeometry(QRect(10, 10, 1031, 681));
        gridLayout_3 = new QGridLayout(gridLayoutWidget_3);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        show_combo = new QComboBox(gridLayoutWidget_3);
        show_combo->setObjectName(QString::fromUtf8("show_combo"));

        gridLayout_4->addWidget(show_combo, 1, 0, 1, 1);

        tableWidget = new QTableWidget(gridLayoutWidget_3);
        if (tableWidget->columnCount() < 11)
            tableWidget->setColumnCount(11);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        __qtablewidgetitem9->setBackground(QColor(255, 255, 255));
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(6, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(7, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(8, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(9, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(10, __qtablewidgetitem19);
        if (tableWidget->rowCount() < 9)
            tableWidget->setRowCount(9);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(1, __qtablewidgetitem21);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(2, __qtablewidgetitem22);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(3, __qtablewidgetitem23);
        QTableWidgetItem *__qtablewidgetitem24 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(4, __qtablewidgetitem24);
        QTableWidgetItem *__qtablewidgetitem25 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(5, __qtablewidgetitem25);
        QTableWidgetItem *__qtablewidgetitem26 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(6, __qtablewidgetitem26);
        QTableWidgetItem *__qtablewidgetitem27 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(7, __qtablewidgetitem27);
        QTableWidgetItem *__qtablewidgetitem28 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(8, __qtablewidgetitem28);
        QBrush brush(QColor(0, 170, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        QBrush brush1(QColor(0, 170, 255, 255));
        brush1.setStyle(Qt::NoBrush);
        QTableWidgetItem *__qtablewidgetitem29 = new QTableWidgetItem();
        __qtablewidgetitem29->setBackground(brush1);
        __qtablewidgetitem29->setForeground(brush);
        tableWidget->setItem(0, 1, __qtablewidgetitem29);
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        QTableWidgetItem *__qtablewidgetitem30 = new QTableWidgetItem();
        __qtablewidgetitem30->setFont(font);
        __qtablewidgetitem30->setBackground(brush);
        tableWidget->setItem(0, 2, __qtablewidgetitem30);
        QTableWidgetItem *__qtablewidgetitem31 = new QTableWidgetItem();
        __qtablewidgetitem31->setBackground(brush);
        tableWidget->setItem(0, 3, __qtablewidgetitem31);
        QTableWidgetItem *__qtablewidgetitem32 = new QTableWidgetItem();
        __qtablewidgetitem32->setBackground(brush);
        tableWidget->setItem(0, 4, __qtablewidgetitem32);
        QTableWidgetItem *__qtablewidgetitem33 = new QTableWidgetItem();
        __qtablewidgetitem33->setBackground(brush);
        tableWidget->setItem(0, 5, __qtablewidgetitem33);
        QTableWidgetItem *__qtablewidgetitem34 = new QTableWidgetItem();
        __qtablewidgetitem34->setBackground(brush);
        tableWidget->setItem(0, 6, __qtablewidgetitem34);
        QTableWidgetItem *__qtablewidgetitem35 = new QTableWidgetItem();
        __qtablewidgetitem35->setBackground(brush);
        tableWidget->setItem(0, 7, __qtablewidgetitem35);
        QTableWidgetItem *__qtablewidgetitem36 = new QTableWidgetItem();
        __qtablewidgetitem36->setBackground(brush);
        tableWidget->setItem(0, 8, __qtablewidgetitem36);
        QBrush brush2(QColor(0, 170, 255, 255));
        brush2.setStyle(Qt::NoBrush);
        QTableWidgetItem *__qtablewidgetitem37 = new QTableWidgetItem();
        __qtablewidgetitem37->setBackground(brush2);
        tableWidget->setItem(0, 9, __qtablewidgetitem37);
        QTableWidgetItem *__qtablewidgetitem38 = new QTableWidgetItem();
        tableWidget->setItem(4, 1, __qtablewidgetitem38);
        QTableWidgetItem *__qtablewidgetitem39 = new QTableWidgetItem();
        tableWidget->setItem(4, 2, __qtablewidgetitem39);
        QTableWidgetItem *__qtablewidgetitem40 = new QTableWidgetItem();
        tableWidget->setItem(4, 3, __qtablewidgetitem40);
        QTableWidgetItem *__qtablewidgetitem41 = new QTableWidgetItem();
        tableWidget->setItem(4, 4, __qtablewidgetitem41);
        QTableWidgetItem *__qtablewidgetitem42 = new QTableWidgetItem();
        tableWidget->setItem(4, 5, __qtablewidgetitem42);
        QTableWidgetItem *__qtablewidgetitem43 = new QTableWidgetItem();
        tableWidget->setItem(4, 6, __qtablewidgetitem43);
        QTableWidgetItem *__qtablewidgetitem44 = new QTableWidgetItem();
        tableWidget->setItem(4, 7, __qtablewidgetitem44);
        QTableWidgetItem *__qtablewidgetitem45 = new QTableWidgetItem();
        tableWidget->setItem(4, 8, __qtablewidgetitem45);
        QTableWidgetItem *__qtablewidgetitem46 = new QTableWidgetItem();
        tableWidget->setItem(4, 9, __qtablewidgetitem46);
        QTableWidgetItem *__qtablewidgetitem47 = new QTableWidgetItem();
        tableWidget->setItem(5, 1, __qtablewidgetitem47);
        QTableWidgetItem *__qtablewidgetitem48 = new QTableWidgetItem();
        tableWidget->setItem(5, 2, __qtablewidgetitem48);
        QTableWidgetItem *__qtablewidgetitem49 = new QTableWidgetItem();
        tableWidget->setItem(5, 3, __qtablewidgetitem49);
        QTableWidgetItem *__qtablewidgetitem50 = new QTableWidgetItem();
        tableWidget->setItem(5, 4, __qtablewidgetitem50);
        QTableWidgetItem *__qtablewidgetitem51 = new QTableWidgetItem();
        tableWidget->setItem(5, 5, __qtablewidgetitem51);
        QTableWidgetItem *__qtablewidgetitem52 = new QTableWidgetItem();
        tableWidget->setItem(5, 6, __qtablewidgetitem52);
        QTableWidgetItem *__qtablewidgetitem53 = new QTableWidgetItem();
        tableWidget->setItem(5, 7, __qtablewidgetitem53);
        QTableWidgetItem *__qtablewidgetitem54 = new QTableWidgetItem();
        tableWidget->setItem(5, 8, __qtablewidgetitem54);
        QTableWidgetItem *__qtablewidgetitem55 = new QTableWidgetItem();
        tableWidget->setItem(5, 9, __qtablewidgetitem55);
        QTableWidgetItem *__qtablewidgetitem56 = new QTableWidgetItem();
        tableWidget->setItem(6, 2, __qtablewidgetitem56);
        QTableWidgetItem *__qtablewidgetitem57 = new QTableWidgetItem();
        tableWidget->setItem(6, 3, __qtablewidgetitem57);
        QTableWidgetItem *__qtablewidgetitem58 = new QTableWidgetItem();
        tableWidget->setItem(6, 4, __qtablewidgetitem58);
        QTableWidgetItem *__qtablewidgetitem59 = new QTableWidgetItem();
        tableWidget->setItem(6, 5, __qtablewidgetitem59);
        QTableWidgetItem *__qtablewidgetitem60 = new QTableWidgetItem();
        tableWidget->setItem(6, 6, __qtablewidgetitem60);
        QTableWidgetItem *__qtablewidgetitem61 = new QTableWidgetItem();
        tableWidget->setItem(6, 7, __qtablewidgetitem61);
        QTableWidgetItem *__qtablewidgetitem62 = new QTableWidgetItem();
        tableWidget->setItem(6, 8, __qtablewidgetitem62);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tableWidget->sizePolicy().hasHeightForWidth());
        tableWidget->setSizePolicy(sizePolicy);
        tableWidget->setMaximumSize(QSize(16777215, 400));

        gridLayout_4->addWidget(tableWidget, 0, 0, 1, 1);

        taken_seats_text = new QTextBrowser(gridLayoutWidget_3);
        taken_seats_text->setObjectName(QString::fromUtf8("taken_seats_text"));
        taken_seats_text->setMaximumSize(QSize(16777215, 100));

        gridLayout_4->addWidget(taken_seats_text, 2, 0, 1, 1);


        gridLayout_3->addLayout(gridLayout_4, 0, 0, 1, 1);

        tabWidget->addTab(halls_tab, QString());
        add_ticket_tab = new QWidget();
        add_ticket_tab->setObjectName(QString::fromUtf8("add_ticket_tab"));
        gridLayoutWidget_2 = new QWidget(add_ticket_tab);
        gridLayoutWidget_2->setObjectName(QString::fromUtf8("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(20, 10, 1021, 671));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        price_table = new QTextBrowser(gridLayoutWidget_2);
        price_table->setObjectName(QString::fromUtf8("price_table"));
        price_table->setMaximumSize(QSize(5000, 250));
        QFont font1;
        font1.setPointSize(16);
        price_table->setFont(font1);

        gridLayout_2->addWidget(price_table, 3, 1, 1, 3);

        label_2 = new QLabel(gridLayoutWidget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_2->addWidget(label_2, 0, 1, 1, 1);

        noadults_input = new QLineEdit(gridLayoutWidget_2);
        noadults_input->setObjectName(QString::fromUtf8("noadults_input"));

        gridLayout_2->addWidget(noadults_input, 2, 2, 1, 1);

        nochildren_input = new QLineEdit(gridLayoutWidget_2);
        nochildren_input->setObjectName(QString::fromUtf8("nochildren_input"));

        gridLayout_2->addWidget(nochildren_input, 2, 4, 1, 1);

        surname_input = new QLineEdit(gridLayoutWidget_2);
        surname_input->setObjectName(QString::fromUtf8("surname_input"));

        gridLayout_2->addWidget(surname_input, 1, 4, 1, 1);

        seats_input = new QLineEdit(gridLayoutWidget_2);
        seats_input->setObjectName(QString::fromUtf8("seats_input"));

        gridLayout_2->addWidget(seats_input, 0, 4, 1, 1);

        label_13 = new QLabel(gridLayoutWidget_2);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        gridLayout_2->addWidget(label_13, 0, 3, 1, 1);

        label_3 = new QLabel(gridLayoutWidget_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_2->addWidget(label_3, 2, 1, 1, 1);

        label_5 = new QLabel(gridLayoutWidget_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_2->addWidget(label_5, 1, 5, 1, 1);

        name_input = new QLineEdit(gridLayoutWidget_2);
        name_input->setObjectName(QString::fromUtf8("name_input"));

        gridLayout_2->addWidget(name_input, 1, 2, 1, 1);

        label = new QLabel(gridLayoutWidget_2);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_2->addWidget(label, 1, 1, 1, 1);

        nostudents_input = new QLineEdit(gridLayoutWidget_2);
        nostudents_input->setObjectName(QString::fromUtf8("nostudents_input"));

        gridLayout_2->addWidget(nostudents_input, 2, 6, 1, 1);

        showtime_combobox = new QComboBox(gridLayoutWidget_2);
        showtime_combobox->setObjectName(QString::fromUtf8("showtime_combobox"));

        gridLayout_2->addWidget(showtime_combobox, 0, 2, 1, 1);

        label_6 = new QLabel(gridLayoutWidget_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_2->addWidget(label_6, 2, 3, 1, 1);

        email_input = new QLineEdit(gridLayoutWidget_2);
        email_input->setObjectName(QString::fromUtf8("email_input"));

        gridLayout_2->addWidget(email_input, 1, 6, 1, 1);

        label_7 = new QLabel(gridLayoutWidget_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_2->addWidget(label_7, 2, 5, 1, 1);

        add_ticket = new QPushButton(gridLayoutWidget_2);
        add_ticket->setObjectName(QString::fromUtf8("add_ticket"));

        gridLayout_2->addWidget(add_ticket, 4, 1, 1, 3);

        label_4 = new QLabel(gridLayoutWidget_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_2->addWidget(label_4, 1, 3, 1, 1);

        tabWidget->addTab(add_ticket_tab, QString());

        gridLayout->addWidget(tabWidget, 0, 0, 1, 1);


        retranslateUi(CashierWindow);

        tabWidget->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(CashierWindow);
    } // setupUi

    void retranslateUi(QDialog *CashierWindow)
    {
        CashierWindow->setWindowTitle(QCoreApplication::translate("CashierWindow", "Dialog", nullptr));
        QTableWidgetItem *___qtablewidgetitem = showtimes_table->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("CashierWindow", "Movie", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = showtimes_table->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("CashierWindow", "Hall", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = showtimes_table->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("CashierWindow", "Date and time", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(showtimes_tab), QCoreApplication::translate("CashierWindow", "Showtimes", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = reservations_table->horizontalHeaderItem(0);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("CashierWindow", "Surname", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = reservations_table->horizontalHeaderItem(1);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("CashierWindow", "Email", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = reservations_table->horizontalHeaderItem(2);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("CashierWindow", "Seat", nullptr));
        process_btn->setText(QCoreApplication::translate("CashierWindow", "Process", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(reservations_tab), QCoreApplication::translate("CashierWindow", "Reservations", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tickets_table->horizontalHeaderItem(0);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("CashierWindow", "Surname", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tickets_table->horizontalHeaderItem(1);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("CashierWindow", "Seat", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tickets_table->horizontalHeaderItem(2);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("CashierWindow", "Price", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tickets_tab), QCoreApplication::translate("CashierWindow", "Tickets", nullptr));

        const bool __sortingEnabled = tableWidget->isSortingEnabled();
        tableWidget->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget->item(0, 5);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("CashierWindow", "SCREEN", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget->item(4, 2);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("CashierWindow", "Seat 0", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidget->item(4, 3);
        ___qtablewidgetitem11->setText(QCoreApplication::translate("CashierWindow", "Seat 1", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = tableWidget->item(4, 4);
        ___qtablewidgetitem12->setText(QCoreApplication::translate("CashierWindow", "Seat 2", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = tableWidget->item(4, 5);
        ___qtablewidgetitem13->setText(QCoreApplication::translate("CashierWindow", "Seat 3", nullptr));
        QTableWidgetItem *___qtablewidgetitem14 = tableWidget->item(4, 6);
        ___qtablewidgetitem14->setText(QCoreApplication::translate("CashierWindow", "Seat 4", nullptr));
        QTableWidgetItem *___qtablewidgetitem15 = tableWidget->item(4, 7);
        ___qtablewidgetitem15->setText(QCoreApplication::translate("CashierWindow", "Seat 5", nullptr));
        QTableWidgetItem *___qtablewidgetitem16 = tableWidget->item(4, 8);
        ___qtablewidgetitem16->setText(QCoreApplication::translate("CashierWindow", "Seat 6", nullptr));
        QTableWidgetItem *___qtablewidgetitem17 = tableWidget->item(5, 2);
        ___qtablewidgetitem17->setText(QCoreApplication::translate("CashierWindow", "Seat 7", nullptr));
        QTableWidgetItem *___qtablewidgetitem18 = tableWidget->item(5, 3);
        ___qtablewidgetitem18->setText(QCoreApplication::translate("CashierWindow", "Seat 8", nullptr));
        QTableWidgetItem *___qtablewidgetitem19 = tableWidget->item(5, 4);
        ___qtablewidgetitem19->setText(QCoreApplication::translate("CashierWindow", "Seat 9", nullptr));
        QTableWidgetItem *___qtablewidgetitem20 = tableWidget->item(5, 5);
        ___qtablewidgetitem20->setText(QCoreApplication::translate("CashierWindow", "Seat 10", nullptr));
        QTableWidgetItem *___qtablewidgetitem21 = tableWidget->item(5, 6);
        ___qtablewidgetitem21->setText(QCoreApplication::translate("CashierWindow", "Seat 11", nullptr));
        QTableWidgetItem *___qtablewidgetitem22 = tableWidget->item(5, 7);
        ___qtablewidgetitem22->setText(QCoreApplication::translate("CashierWindow", "Seat 12", nullptr));
        QTableWidgetItem *___qtablewidgetitem23 = tableWidget->item(5, 8);
        ___qtablewidgetitem23->setText(QCoreApplication::translate("CashierWindow", "Seat 13", nullptr));
        QTableWidgetItem *___qtablewidgetitem24 = tableWidget->item(6, 2);
        ___qtablewidgetitem24->setText(QCoreApplication::translate("CashierWindow", "Seat 14", nullptr));
        QTableWidgetItem *___qtablewidgetitem25 = tableWidget->item(6, 3);
        ___qtablewidgetitem25->setText(QCoreApplication::translate("CashierWindow", "Seat 15", nullptr));
        QTableWidgetItem *___qtablewidgetitem26 = tableWidget->item(6, 4);
        ___qtablewidgetitem26->setText(QCoreApplication::translate("CashierWindow", "Seat 16", nullptr));
        QTableWidgetItem *___qtablewidgetitem27 = tableWidget->item(6, 5);
        ___qtablewidgetitem27->setText(QCoreApplication::translate("CashierWindow", "Seat 17", nullptr));
        QTableWidgetItem *___qtablewidgetitem28 = tableWidget->item(6, 6);
        ___qtablewidgetitem28->setText(QCoreApplication::translate("CashierWindow", "Seat 18", nullptr));
        QTableWidgetItem *___qtablewidgetitem29 = tableWidget->item(6, 7);
        ___qtablewidgetitem29->setText(QCoreApplication::translate("CashierWindow", "Seat 19", nullptr));
        QTableWidgetItem *___qtablewidgetitem30 = tableWidget->item(6, 8);
        ___qtablewidgetitem30->setText(QCoreApplication::translate("CashierWindow", "Seat 20", nullptr));
        tableWidget->setSortingEnabled(__sortingEnabled);

        taken_seats_text->setHtml(QCoreApplication::translate("CashierWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2';\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2';\"><br /></p></body></html>", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(halls_tab), QCoreApplication::translate("CashierWindow", "Seatings", nullptr));
        price_table->setHtml(QCoreApplication::translate("CashierWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:16pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2';\"><br /></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("CashierWindow", "Showtime", nullptr));
        label_13->setText(QCoreApplication::translate("CashierWindow", "Seats", nullptr));
        label_3->setText(QCoreApplication::translate("CashierWindow", "Number of adults", nullptr));
        label_5->setText(QCoreApplication::translate("CashierWindow", "Email", nullptr));
        label->setText(QCoreApplication::translate("CashierWindow", "Name", nullptr));
        label_6->setText(QCoreApplication::translate("CashierWindow", "Number of children", nullptr));
        label_7->setText(QCoreApplication::translate("CashierWindow", "Number of students", nullptr));
        add_ticket->setText(QCoreApplication::translate("CashierWindow", "Print bill and add ticket", nullptr));
        label_4->setText(QCoreApplication::translate("CashierWindow", "Surname", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(add_ticket_tab), QCoreApplication::translate("CashierWindow", "Add ticket", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CashierWindow: public Ui_CashierWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CASHIERWINDOW_H
