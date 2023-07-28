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
inline void Salary<T>::set_brutto(T b)
{
    brutto = b;
}

template <typename T>
void Salary<T>::get_salary()
{
    Commuting<T> commuting;
    if(commuting.get_car_owner())
    {
        return brutto + food_expenses + commuting.get_distance() * compensation_per_km;
    }
     
}
