/*
Write a C++ program to create class called MATRIX using two-dimensional array of integers, by
overloading the operator == which checks the compatibility of two matrices to be added and
subtracted. Perform the addition and subtraction by overloading + and – operators
respectively. Display the results by overloading the operator <<. If (m1 == m2) then m3 = m1 +
m2 and m4 = m1 – m2 else display error
*/

#include <iostream>
using namespace std;

class Matrix
{
    int m[10][10], r, c;

public:
    void getdata()
    {
        cout << "Enter number of rows: ";
        cin >> r;
        cout << "Enter number of columns: ";
        cin >> c;
        cout << "Enter elements of matrix: " << endl;
        for (int i = 0; i < r; i++)
            for (int j = 0; j < c; j++)
                cin >> m[i][j];
    }
    void putdata()
    {
        cout << "Matrix: " << endl;
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
                cout << m[i][j] << " ";
            cout << endl;
        }
    }
    Matrix operator+(Matrix m2)
    {
        Matrix m3;
        m3.r = r;
        m3.c = c;
        for (int i = 0; i < m3.r; i++)
            for (int j = 0; j < m3.c; j++)
                m3.m[i][j] = m[i][j] + m2.m[i][j];
        return m3;
    }
    Matrix operator-(Matrix m2)
    {
        Matrix m3;
        m3.r = r;
        m3.c = c;
        for (int i = 0; i < m3.r; i++)
            for (int j = 0; j < m3.c; j++)
                m3.m[i][j] = m[i][j] - m2.m[i][j];
        return m3;
    }
    bool operator==(Matrix m2)
    {
        return (r == m2.r && c == m2.c);
    }
};

int main()
{
    Matrix m1, m2, m3, m4;
    cout << "Enter details of matrix 1: " << endl;
    m1.getdata();
    cout << "Enter details of matrix 2: " << endl;
    m2.getdata();
    if (m1 == m2)
    {
        m3 = m1 + m2;
        m4 = m1 - m2;
        cout << "Matrix 1: " << endl;
        m1.putdata();
        cout << "Matrix 2: " << endl;
        m2.putdata();
        cout << "Matrix 3 = Matrix 1 + Matrix 2: " << endl;
        m3.putdata();
        cout << "Matrix 4 = Matrix 1 - Matrix 2: " << endl;
        m4.putdata();
    }
    else
        cout << "Matrices are not compatible for addition and subtraction" << endl;
    return 0;
}

