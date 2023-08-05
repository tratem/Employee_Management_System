#include "../Headers/Salary.h"

Salary::Salary()
{
    tax_number = 0;
    compensation_per_km = 0;
    food_expenses = 0;
    base_salary = 0;
}

Salary:: ~Salary()
{

}

void Salary::set_tax_nuber(int tn)
{
    tax_number = tn;
}

void Salary::set_base_salary(int base)
{
    base_salary = base;
}

void Salary::set_compensation_per_km(float cpkm)
{
    compensation_per_km = cpkm;
}

void Salary::set_food_expenses(float fe)
{
    food_expenses = fe;
}

void Salary::display_btutto_salary_data() 
{
    cout << "Tax Number: " << tax_number << endl << "Base Salary: " << base_salary << endl
    <<"Food Expenses: " << food_expenses << endl 
    <<"Compensation per km: " << compensation_per_km << endl 
    <<"Car Owner: " << car_owner << endl << "Distance to Work: " << distance_to_work << endl 
    <<"Total Brutto Salary: " << get_Brutto() << endl;
}

float Salary::get_Brutto()
{
    Commuting commuting;
    if(commuting.get_car_owner())
    {
        return base_salary + food_expenses + commuting.get_distance() * 2 * compensation_per_km;
    }
    else 
        return base_salary + food_expenses + 35;
}
