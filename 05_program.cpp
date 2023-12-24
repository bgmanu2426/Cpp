/*
Demonstrate simple inheritance concept by creating a base class FATHER with data members:
First Name, Surname, DOB & bank Balance and creating a derived class SON, which inherits:
Surname & Bank Balance feature from base class but provides its own feature: First Name & DOB.
Create & initialize F1 & S1 objects with appropriate constructors & display the FATHER & SON
details.
*/

#include <iostream>
#include <string>
using namespace std;

// Base class
class Father
{
public:
    string firstName, surname, dob;
    double bankBalance;

    // Constructor of Father class
    Father(string fName, string sName, string dateOfBirth, double balance)
    {
        firstName = fName;
        surname = sName;
        dob = dateOfBirth;
        bankBalance = balance;
    }

    // Function to display details
    void displayDetails()
    {
        cout << "First Name: " << firstName << endl;
        cout << "Surname: " << surname << endl;
        cout << "DOB: " << dob << endl;
        cout << "Bank Balance: " << bankBalance << endl;
    }
};

// Derived class inherit only Surname & Bank Balance and take new First Name & DOB
class Son : public Father
{
public:
    // Constructor of Son class
    Son(string fName, string dateOfBirth, string sName, double balance) : Father(fName, sName, dateOfBirth, balance) {
        
    }
};

int main()
{
    // Create and initialize F1 & S1 objects
    Father F1("John", "Doe", "01-01-1970", 50000.00);
    Son S1("Jack", "01-01-2000", "Doe", 10000.00);

    // Display the FATHER & SON details
    cout << "Father Details:\n";
    F1.displayDetails();
    cout << "\nSon Details:\n";
    S1.displayDetails();

    return 0;
}