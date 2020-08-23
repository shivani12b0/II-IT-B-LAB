/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

int main() 
{
    int numbers[5];
    cout << "Enter 5 numbers: " << endl;
    for (int i = 0; i < 5; ++i) 
    {
        cin >> numbers[i];
    }
    cout << "The numbers are: ";
    for (int n = 0; n < 5; ++n) 
    {
        cout << numbers[n] << "  ";
    }
    return 0;
}