/*1. Array Sum and Average 
o Write a C++ program that accepts an array of integers, calculates the sum and 
average, and displays the results. 
o Objective: Understand basic array manipulation.*/
#include <iostream>
using namespace std;
int main()
{
    int arr[100], size, i, sum = 0;

    cout << "Enter the size of an array : ";
    cin >> size;

    for (i = 0; i < size; i++)
    {
        cout << "Enter the array elements [" << i << "] : ";
        cin >> arr[i];
        sum = sum + arr[i];
    }
    cout << "The sum of the array is : " << sum << endl;
    cout << "The average of the array is : " << (float)sum / (float)size;

    return 0;
}