#include "../Headers/Employee.h"

Employee::Employee()
{
    employeeID = 0;
    name = " ";
    surname = " ";
    position = " ";    
}

Employee::Employee(string n, string sn, int ID, string pos, int tax,
    int base, float food, float cpkm, bool car, float distance) 
{
    name = n;
    surname = sn;
    employeeID = ID;
    position = pos;
    tax_number = tax;
    base_salary = base;
    food_expenses = food;
    compensation_per_km = cpkm;
    car_owner = car;
    distance_to_work = distance;
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
