/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <cmath>
using namespace std;
void DecimalToOctal(int decimalNum) 
{
    int octalNum = 0, placeValue = 1;
    int dNum = decimalNum;
    while (decimalNum != 0) 
    {
        octalNum += (decimalNum % 8) * placeValue;
        decimalNum /= 8;
        placeValue *= 10;
    }
    cout<<"Octal form of decimal number "<<dNum<<" is "<<octalNum<<endl;
}
void OctalToDecimal(int octalNum) 
{
    int decimalNum = 0, power = 0;
    int oNum = octalNum;
    while(octalNum != 0) 
    {
        decimalNum += (octalNum%10) * pow(8,power);
        ++power;
        octalNum/=10;
    }
    cout<<"Decimal form of octal number "<<oNum<<" is "<<decimalNum<<endl;
}
int main() 
{
    DecimalToOctal(20);
    OctalToDecimal(32);
    return 0;
}