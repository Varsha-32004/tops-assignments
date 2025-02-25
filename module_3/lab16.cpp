/*2. Matrix Addition 
o Write a C++ program to perform matrix addition on two 2x2 matrices. 
o Objective: Practice multi-dimensional arrays. */
#include <iostream>
using namespace std;
int main()
{
    int a[100][100], b[100][100], ans[100][100];
    int size, i, j, k;
    char ch;
    cout << "Enter The Size Of An Array: ";
    cin >> size;

    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            cout << "Enter the elements of an array a[" << i << "][" << j << "] : ";
            cin >> a[i][j];
        }
    }
    cout << endl;
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            cout << "Enter the elements of an array b[" << i << "][" << j << "] : ";
            cin >> b[i][j];
        }
    }
    cout << "The array of a is :" << endl;
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "The array of b is :" << endl;
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            cout << b[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "Enter + for Addition of 2*2 matrix" << endl;
    cout << "Enter * for Multiplication of 2*2 matrix" << endl;
    cout << "Enter Your Choice : ";
    cin >> ch;
    switch (ch)
    {
    case '+':
        cout << "-------------------The Sum of array----------------" << endl;
        for (i = 0; i < size; i++)
        {
            for (j = 0; j < size; j++)
            {
                ans[i][j] = a[i][j] + b[i][j];
            }
        }
        for (i = 0; i < size; i++)
        {
            for (j = 0; j < size; j++)
            {
                cout << ans[i][j] << " ";
            }
            cout << "\n";
        }
        break;
    case '*':
        cout << "--------------------The Multiplication of array------------------------" << endl;
        for (i = 0; i < size; i++)
        {
            for (j = 0; j < size; j++)
            {
                for (k = 0; k < size; k++)
                {
                    ans[i][j] = ans[i][j] + (a[i][k] * b[k][j]);
                }
            }
        }
        for (i = 0; i < size; i++)
        {
            for (j = 0; j < size; j++)
            {
                cout << ans[i][j] << " ";
            }
            cout << "\n";
        }
        break;
    default:
        cout << "Error!invalid Choice";
        break;
    }

    return 0;
}