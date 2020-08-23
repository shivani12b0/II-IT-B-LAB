/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
void DecimalToBinary(int n) 
{
   int binaryNumber[100], num=n;
   int i = 0;
   while (n > 0) 
   {
      binaryNumber[i] = n % 2;
      n = n / 2;
      i++;
   }
   cout<<"Binary form of "<<num<<" is\n";
   for (int j = i - 1; j >= 0; j--)
   {
       cout << binaryNumber[j];
       cout<<endl;
   }   
}
int BinaryToDecimal(int n) 
{
   int decimalNumber = 0;
   int base = 1;
   int temp = n;
   while (temp) 
   {
      int lastDigit = temp % 10;
      temp = temp/10;
      decimalNumber += lastDigit*base;
      base = base*2;
   }
   cout<<"Decimal form of "<<n<<" is "<<decimalNumber<<endl;;
}
int main() 
{
   DecimalToBinary(27);
   BinaryToDecimal(10101);
   return 0;
}