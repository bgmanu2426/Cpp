/*
Write a C++ program to accept the student detail such as name & 3 different marks by get_data()
method & display the name & average of marks using display() method. Define a friend function
for calculating the average marks using the method mark_avg().
*/

#include <iostream>
using namespace std;

class Student
{
    string name;
    int marks[3];

public:
    void get_data()
    {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter marks: ";
        for (int i = 0; i < 3; i++)
            cin >> marks[i];
    }
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Average Marks: " << mark_avg(*this) << endl;
    }
    friend float mark_avg(Student);
};

float mark_avg(Student s)
{
    int sum = 0;
    for (int i = 0; i < 3; i++)
        sum += s.marks[i];
    return sum / 3.0;
}

int main()
{
    Student s;
    s.get_data();
    s.display();
    return 0;
}
