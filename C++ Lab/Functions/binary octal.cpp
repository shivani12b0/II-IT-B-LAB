/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <cmath>
using namespace std;
int BinarytoOctal(int binaryNum) 
{
   int octalNum = 0, decimalNum = 0, count = 0;
   int bNum = binaryNum;
   while(binaryNum != 0) 
   {
      decimalNum += (binaryNum%10) * pow(2,count);
      ++count;
      binaryNum/=10;
   }
   count = 1;
   while (decimalNum != 0) {
      octalNum += (decimalNum % 8) * count;
      decimalNum /= 8;
      count *= 10;
   }
   cout<<"Octal form of binary number "<<bNum<<" is "<<octalNum<<endl;
   return octalNum;
}
int OctalToBinary(int octalNum) 
{
    int decimalNum = 0, binaryNum = 0, count = 0;
    int oNum = octalNum;
    while(octalNum != 0) 
    {
        decimalNum += (octalNum%10) * pow(8,count);
        count++;
        octalNum/=10;
    }
    count = 1;
    while (decimalNum != 0) 
    {
        binaryNum += (decimalNum % 2) * count;
        decimalNum /= 2;
        count *= 10;
    }
    cout<<"Binary form of octal number "<<oNum<<" is "<<binaryNum<<endl;
    return binaryNum;
}
int main() 
{
    BinarytoOctal(1010);
    OctalToBinary(32);
    return 0;
}