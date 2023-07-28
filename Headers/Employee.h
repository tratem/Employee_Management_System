#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>

using namespace std;

class Employee
{
private:
    int employeeID;
    string name;
    string surname;
    string position;
public:
    Employee();
    ~Employee();
    void set_employeeID(int ID);
    void set_name(string n);
    void set_surname(string s);
    void set_position(string p);
};


#endif