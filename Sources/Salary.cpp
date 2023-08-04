#include "../Headers/Salary.h"


template <typename T>
Salary<T>::Salary()
{
    tax_number = 0;
    compensation_per_km = 0;
    food_expenses = 0;
    brutto = 0;
}

template <typename T>
Salary<T>::~Salary()
{
}

template <typename T>
void Salary<T>::set_tax_nuber(int tn)
{
    tax_number = tn;
}

template <typename T>
void Salary<T>::set_base_salary(int base)
{
    base_salary = base;
}

template <typename T>
void Salary<T>::set_compensation_per_km(float cpkm)
{
    compensation_per_km = cpkm;
}

template <typename T>
void Salary<T>::set_food_expenses(T fe)
{
    food_expenses = fe;
}

template <typename T>
void Salary<T>::get_Brutto()
{
    Commuting<T> commuting;
    if(commuting.get_car_owner())
    {
        return base_salary + food_expenses + commuting.get_distance() * compensation_per_km;
    }
    else 
        return base_salary + food_expenses + 35;
}
