#include "../Headers/Employee.h"

//default constructor
Employee::Employee()
{
    employeeID = 0;
    name = " ";
    surname = " ";
    position = " ";    
}

//Parametarized constructor
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

int Employee::get_employeeID()
{
    return employeeID;
}

void Employee::display_all_employee_data()
{
    cout << "Employee ID: " << employeeID << endl << "Name: " << name << endl
    <<"Surname: " << surname << endl << "Position: " << position << endl 
    <<"Tax Number: " << tax_number << endl << "Base Salary: " << base_salary << endl
    <<"Food Expenses: " << food_expenses << endl 
    <<"Compensation per km: " << compensation_per_km << endl 
    <<"Car Owner: " << car_owner << endl << "Distance to Work: " << distance_to_work << endl 
    <<"Total Brutto Salary: " << get_Brutto() << endl;
}
