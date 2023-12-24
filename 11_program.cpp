/*
Write a C++ program to create three objects for a class named count object with data members
such as roll_no & Name. Create a members function set_data ( ) for setting the data values &
display ( ) member function to display which object has invoked it using „this‟ pointer. 
*/

#include <iostream>
using namespace std;

class CountObject
{
    int rollNo;
    string name;

public:
    void set_data(int r, string n)
    {
        rollNo = r;
        name = n;
    }
    void display()
    {
        cout << "Roll No: " << rollNo << endl;
        cout << "Name: " << name << endl;
        cout << "Object Address: " << this << endl;
    }
};

int main()
{
    CountObject c1, c2, c3;
    c1.set_data(1, "John");
    c2.set_data(2, "Jack");
    c3.set_data(3, "Jill");
    c1.display();
    c2.display();
    c3.display();
    return 0;
}
