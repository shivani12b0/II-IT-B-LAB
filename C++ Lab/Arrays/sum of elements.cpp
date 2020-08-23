/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<iostream>
using namespace std;
int main ()
{
    int arr[10], n, i, sum = 0;
    cout << "Enter the size of the array : ";
    cin >> n;
    cout << "\nEnter the elements of the array : ";
    for (i = 0; i < n; i++)
    cin >> arr[i];
    for (i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    cout << "\nSum of array elements : " << sum;
    return 0;
}