#include <iostream>
#include <fstream>
#include "../Headers/Salary.h"
#include "../Headers/Employee.h"
using namespace std;
template <typename T>
Salary<T> salary;


Employee employee;

int main()
{
    fstream DataFile ("../Data.txt",	ios::in | ios::out);
    char c, option;
    int i = 0;
    cout << "Welcome to Employee Managment System!" << endl;
    do
    {
        cout << "Please chose what would you like to do: [R]ead, [W]rite or [D]elete data." << endl;
        cin >> option;
        while ((toupper(option) !='R') && (toupper(option) !='W') && (toupper(option) !='D'))
        {
            cout << "incorrect operation, please chose what would you like to do: [R]ead, [W]rite or [D]elete data." << endl;
            cin >> option;
        }
        
        if (toupper(option) =='W')
        {
            int employeeID;
            string name;
            string surname;
            string position;
            char car_owner;
            float distance_to_work;
            int tax_number;
            int base_salary;
            float compensation_per_km;
            float food_expenses;

            
            cout << "Add Employees in the following format:" << endl
            << "First Name, Last Name, EmployeeID, Position" << endl;
            cin >> name >> surname >> employeeID >> position;
            
            cout << "Now insert salary data following this format:" << endl
            << "Tax number, Base salary, Food expenses, and Compensation per km " <<endl;
            cin >> tax_number >> base_salary >> food_expenses >> compensation_per_km; 

            cout << "Now insert commuting info:" << endl
            << "Car owner[y/n], if yes write distance to work" <<endl;
            cin >>  car_owner;
            if (toupper(car_owner) == 'Y' )
                cin >> distance_to_work;
            
            

            i++;
        }

        else if (toupper(option) =='R')
        {
            string tp;
            while(getline(DataFile, tp))
            {
                cout << tp << endl;
            } 
        }

        else if (toupper(option) =='D')
        {
            
        }

        cout << "For ending the program write x otherwhise write whatever.";
        cin >> c;
    } while (toupper(c)!= 'X');
    

    
    DataFile.close();

    return 0;
}