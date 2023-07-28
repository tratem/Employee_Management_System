#include "../Headers/Employee.h"

Employee::Employee()
{
    employeeID = 0;
    name = " ";
    surname = " ";
    position = " ";
}

Employee::~Employee()
{
}

void Employee::set_employeeID(int ID)
{
    employeeID = ID;
}

void Employee::set_name(string n)
{
    name = n;
}

void Employee::set_surname(string s)
{
    surname = s;
}

void Employee::set_position(string p)
{
    position = p;
}
