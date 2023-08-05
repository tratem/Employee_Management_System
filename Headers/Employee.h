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
    Employee(string nn, int ID);
    Employee(string n, string sn, int ID, string pos, int tax, int base, float food, float cpkm, bool car, float distance);
    ~Employee();
    void set_employeeID(int ID);
    void set_name(string n);
    void set_surname(string s);
    void set_position(string p);
    int get_employeeID();
    void display_all_employee_data();
};


#endif