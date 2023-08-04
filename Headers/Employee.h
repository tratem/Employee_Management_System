#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>
#include "Salary.h"

using namespace std;

class Employee : public Salary
{
private:
    int employeeID;
    string name;
    string surname;
    string position;
public:
    Employee();
    Employee(float em);
    ~Employee();
    void set_employeeID(int ID);
    void set_name(string n);
    void set_surname(string s);
    void set_position(string p);
};


#endif