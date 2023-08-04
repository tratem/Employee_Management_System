#ifndef SALARY_H
#define SALARY_H
#include "Commuting.h"

class Salary : public Commuting
{
private:
    int tax_number;
    int base_salary;
    float compensation_per_km;
    float food_expenses;
public:
    Salary();
    ~Salary();
    void set_tax_nuber(int tn);
    void set_base_salary(int base);
    void set_compensation_per_km(float cpkm);
    void set_food_expenses(float fe);
    float get_Brutto();
};




#endif

