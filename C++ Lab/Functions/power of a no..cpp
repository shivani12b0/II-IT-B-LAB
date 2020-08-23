/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>
using namespace std;

int calculatePower(int, int);

int main()
{
    int base, exponent, result;
    cout << "Enter base number: ";
    cin >> base;
    cout << "Enter exponential number(positive integer): ";
    cin >> exponent;

    result = calculatePower(base, exponent);
    cout << base << "^" << exponent << " = " << result;

    return 0;
}

int calculatePower(int base, int exponent)
{
    if (exponent != 0)
        return (base*calculatePower(base, exponent-1));
    else
        return 1;
}