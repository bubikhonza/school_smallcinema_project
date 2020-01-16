#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include "QString"

class Employee
{
public:
    Employee();
    int id;
    QString name;
    QString surname;
    QString email;
    int phone;
    QString employeeType;

};

#endif // EMPLOYEE_H
