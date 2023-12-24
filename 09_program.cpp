/*
Design, develop and execute a program in C++ based on the following requirements: An
EMPLOYEE class containing data members & members functions: i) Data members: employee
number (an integer), Employee_ Name (a string of characters), Basic_ Salary (in integer), All_
Allowances (an integer), Net_Salary (an integer). (ii) Member functions: To read the data of
an employee, to calculate Net_Salary & to print the values of all the data members. (All_Allowances
= 123% of Basic, Income Tax (IT) =30% of gross salary (=basic_ Salary_All_Allowances_IT). 
*/

#include <iostream>
#include <string>
using namespace std;

class Employee
{
    int empNo, basicSalary, allAllowances, netSalary;
    string empName;

public:
    void readData()
    {
        cout << "Enter Employee Number: ";
        cin >> empNo;
        cout << "Enter Employee Name: ";
        cin >> empName;
        cout << "Enter Basic Salary: ";
        cin >> basicSalary;
    }
    void calculateNetSalary()
    {
        allAllowances = 1.23 * basicSalary;
        netSalary = basicSalary + allAllowances - 0.3 * (basicSalary + allAllowances);
    }
    void printData()
    {
        cout << "Employee Number: " << empNo << endl;
        cout << "Employee Name: " << empName << endl;
        cout << "Basic Salary: " << basicSalary << endl;
        cout << "All Allowances: " << allAllowances << endl;
        cout << "Net Salary: " << netSalary << endl;
    }
};

int main()
{
    Employee e;
    e.readData();
    e.calculateNetSalary();
    e.printData();
    return 0;
}
