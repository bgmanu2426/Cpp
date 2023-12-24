/*
Write a C++ program to define class name FATHER & SON that holds the income respectively.
Calculate & display total income of a family using Friend function
*/

#include <iostream>
using namespace std;

// Forward Declaration of class Son
class Son;

// Class Father
class Father
{
    double income;

public:
    Father(double i)
    {
        income = i;
    }
    friend void totalIncome(Father, Son);
};

// Class Son
class Son
{
    double income;

public:
    Son(double i)
    {
        income = i;
    }
    friend void totalIncome(Father, Son);
};

void totalIncome(Father f, Son s)
{
    cout << "Total Income: " << f.income + s.income << endl;
}

int main()
{
    Father f(50000.00);
    Son s(10000.00);
    totalIncome(f, s);
    return 0;
}
