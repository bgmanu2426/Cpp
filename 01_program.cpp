/*
Write a C++ program to find largest, smallest and second largest of three numbers using inline functions MAX and MIN.
*/

#include <iostream>
using namespace std;

inline int MAX(int a, int b) {
    return a > b ? a : b;
}

inline int MIN(int a, int b) {
    return a < b ? a : b;
}

int main() {
    int num1, num2, num3;

    cout << "Enter three numbers: " << endl;
    cin >> num1 >> num2 >> num3;

    int largest = MAX(MAX(num1, num2), num3);
    int smallest = MIN(MIN(num1, num2), num3);

    cout << "Largest number is: " << largest << endl;
    cout << "Smallest number is: " << smallest << endl;

    int secondLargest = num1 + num2 + num3 - largest - smallest;
    cout << "Second largest number is: " << secondLargest << endl;

    return 0;
}