#ifndef SALARY_H
#define SALARY_H
#include "Commuting.h"

template <typename T>
class Salary : public Commuting<T> 
{
private:
    int tax_number;
    float compensation_per_km;
    T food_expenses;
    T brutto;
public:
    Salary();
    ~Salary();
    void set_tax_nuber(int tn);
    void set_compensation_per_km(float cpkm);
    void set_food_expenses(T fe);
    void set_brutto(T b);
    void get_salary();
};




#endif

