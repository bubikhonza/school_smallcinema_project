/********************************************************************************
** Form generated from reading UI file 'loginscreen.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINSCREEN_H
#define UI_LOGINSCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginScreen
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *input;
    QPushButton *loginBtn;

    void setupUi(QDialog *LoginScreen)
    {
        if (LoginScreen->objectName().isEmpty())
            LoginScreen->setObjectName(QString::fromUtf8("LoginScreen"));
        LoginScreen->resize(1018, 706);
        gridLayoutWidget = new QWidget(LoginScreen);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 10, 1001, 681));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(13);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        input = new QLineEdit(gridLayoutWidget);
        input->setObjectName(QString::fromUtf8("input"));
        input->setMaximumSize(QSize(800, 16777215));

        gridLayout->addWidget(input, 0, 1, 1, 1);

        loginBtn = new QPushButton(gridLayoutWidget);
        loginBtn->setObjectName(QString::fromUtf8("loginBtn"));
        loginBtn->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(loginBtn->sizePolicy().hasHeightForWidth());
        loginBtn->setSizePolicy(sizePolicy);
        loginBtn->setMaximumSize(QSize(300, 16777215));

        gridLayout->addWidget(loginBtn, 0, 2, 1, 1);


        retranslateUi(LoginScreen);

        QMetaObject::connectSlotsByName(LoginScreen);
    } // setupUi

    void retranslateUi(QDialog *LoginScreen)
    {
        LoginScreen->setWindowTitle(QApplication::translate("LoginScreen", "Dialog", nullptr));
        label->setText(QApplication::translate("LoginScreen", "Login code:", nullptr));
        loginBtn->setText(QApplication::translate("LoginScreen", "Login", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginScreen: public Ui_LoginScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINSCREEN_H
