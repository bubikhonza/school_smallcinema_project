#include "loginscreen.h"
#include "ui_loginscreen.h"
#include "adminwindow.h"
#include "cashierwindow.h"
LoginScreen::LoginScreen(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LoginScreen)
{
    ui->setupUi(this);
}

LoginScreen::~LoginScreen()
{
    delete ui;
}

void LoginScreen::on_loginBtn_clicked()
{
    QString input = ui->input->text();
    if(input == "admin"){
        AdminWindow* a = new AdminWindow();
        a->show();
        this->close();
    }
    else if(input == "cashier"){
        CashierWindow* c = new CashierWindow();
        c->show();
        c->update();
        this->close();
    }

}
