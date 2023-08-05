//read IDEA.txt
#include <iostream>
#include <fstream>
#include "../Headers/Employee.h"
#define MAX_EMPLOYEES 500

using namespace std;

Employee employee[MAX_EMPLOYEES];

int main()
{
    fstream DataFile ("../Data.txt", ios::out); //output the data
    char c, option;
    int i = 0; // counter for adding objects 
    cout << "Welcome to Employee Managment System!" << endl;
    do //loop for closure of project
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
            string name, surname, position;
            int employeeID, tax_number, base_salary;
            float food_expenses, compensation_per_km, distance_to_work;
            char car_owner;

            cout << "Enter Employee Information:" << endl;
            cout << "First Name, Last Name, Employee ID, Position: ";
            cin >> name >> surname >> employeeID >> position;

            cout << "Enter Salary Information:" << endl;
            cout << "Tax number, Base salary, Food expenses, Compensation per km: ";
            cin >> tax_number >> base_salary >> food_expenses >> compensation_per_km;

            cout << "Enter Commuting Information:" << endl;
            cout << "Car owner[y/n]: ";
            cin >> car_owner;

            if (toupper(car_owner) == 'Y') {
                cout << "Distance to work: ";
                cin >> distance_to_work;
            }
            else
                distance_to_work = 0;

            employee[i] = Employee(name, surname, employeeID, position, tax_number, base_salary,
                food_expenses, compensation_per_km, toupper(car_owner) == 'Y', distance_to_work);
            
            i++;
        }

        else if (toupper(option) =='R')
        {
            char print;
            cout << "[F]ull employee data or [S]alary only?" << endl;
            cin >> print;
            while ((toupper(print)!='F') && (toupper(print)!='S'))
            {
                cout <<"Chose 'F' for Full data or 'S' for Salary only: " << endl;
                cin >> print;
            }
            
            if (toupper(print) == 'F')
            {
                for (int j = 0; j <= i ; j++)
                {
                    employee[j].display_all_employee_data();
                }
            }
            else 
            {
                for (int j = 0; j < i ; j++)
                {
                    employee[j].display_btutto_salary_data();
                }
            }
        }

        else if (toupper(option) =='D')
        {
            
        }

        cout << "For ending the program write x otherwhise write whatever.";
        cin >> c;
    } while ((toupper(c)!= 'X') && (i < MAX_EMPLOYEES));
    

    
    DataFile.close();

    return 0;
}