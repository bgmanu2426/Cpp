/*
Write a C++ program to find largest, smallest and second largest of three numbers using inline functions MAX and MIN.
*/


#include<iostream>
using namespace std;

inline int MAX(int a, int b, int c){
    int largest = (a>=b && a>=c) ? a : (b>=a && b>=c) ? b : c;
    return largest;
}

inline int MIN(int a, int b, int c){
    int smallest = (a<=b && a<=c) ? a : (b<=a && b<=c) ? b : c;
    return smallest;
}

int main(){
    int num1, num2, num3;

    cout<<"Enter three numbers: " << endl;
    cin>>num1>>num2>>num3;

    int largest = MAX(num1, num2, num3);
    int smallest = MIN(num1, num2, num3);

    cout<<"Largest number is: " << largest << endl;
    cout<<"Smallest number is: " << smallest << endl;

    if (largest == num1 && smallest == num2 || largest == num2 && smallest == num1){
        cout << "The second largest number : " << num3 << endl;
    } else if(largest == num1 && smallest == num3 || largest == num3 && smallest == num1){
        cout << "The second largest number : " << num2 << endl;
    } else if(largest == num2 && smallest == num3 || largest == num3 && smallest == num2){
        cout << "The second largest number : " << num1 << endl;
    }

    return 0;
}