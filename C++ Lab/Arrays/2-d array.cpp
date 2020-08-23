/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<iostream>
using namespace std;
void two_Darray(int a[2][2]) 
{
    cout << "element at index 1,1 is " << a[1][1];
}
int main() 
{
    int arr[2][2];
    arr[0][0] = 0;
    arr[0][1] = 1;
    arr[1][0] = 2;
    arr[1][1] = 3;
   two_Darray(arr);
   return 0;
}
