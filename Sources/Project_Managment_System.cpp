#include <iostream>
#include "../Headers/Salary.h"
#include "../Headers/Employee.h"
using namespace std;
template <typename T>
Salary<T> salary;
Employee employee;

int main()
{
    char option;
    cout << "Welcome to Employee Managment System!" << endl;
    cout << "Please chose what would you like to do: [R]ead, [W]rite or [D]elete data." << endl;
    cin >> option;
    while ((toupper(option) !='R') && (toupper(option) !='W') && (toupper(option) !='D'))
    {
        cout << "incorrect operation, please chose what would you like to do: [R]ead, [W]rite or [D]elete data." << endl;
        cin >> option;
    }
    
    
    return 0;
}