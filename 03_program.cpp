/*
Define a STUDENT class with USN, Name & Marks in 3 tests of a subject. Declare an array of 10
STUDENT objects. Using appropriate functions, find the average of the two better marks for each
student. Print the USN, Name & the average marks of all the students.
*/

#include <iostream>
#include <string>
using namespace std;

class Student
{
    string usn, name;
    int marks[3]; // Marks scored in 3 tests

public:
    void getdata()
    {
        cout << "Enter USN: ";
        cin >> usn;
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Marks in 3 tests: ";
        for (int i = 0; i < 3; i++)
            cin >> marks[i];
    }
    void putdata()
    {
        cout << "USN: " << usn << endl;
        cout << "Name: " << name << endl;
        cout << "Marks in 3 tests: ";
        for (int i = 0; i < 3; i++)
            cout << marks[i] << " ";
        cout << endl;
    }
    float avg()
    {
        int min = marks[0], max = marks[0];
        for (int i = 1; i < 3; i++)
        {
            if (marks[i] < min)
                min = marks[i];
            if (marks[i] > max)
                max = marks[i];
        }
        return (marks[0] + marks[1] + marks[2] - min - max) / 1.0;
    }
};

int main()
{
    Student s[10];
    for (int i = 0; i < 10; i++)
    {
        cout << "Enter details of student " << i + 1 << endl;
        s[i].getdata();
    }
    cout << "Details of students: " << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << "Student " << i + 1 << endl;
        s[i].putdata();
    }
    cout << "Average marks of students: " << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << "Student " << i + 1 << endl;
        cout << "Average marks: " << s[i].avg() << endl;
    }
    return 0;
}
