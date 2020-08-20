/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
int main() {
   int num1,num2;
   cout << "Enter two integers: ";
    cin >> num1 >> num2;
   if((num1 & 1) == 0)
   cout << num1 << " is even\n";
   else
   cout << num1 << " is odd\n";
   if((num2 & 1) == 0)
   cout << num2 << " is even\n";
   else
   cout << num2 << " is odd\n";
   return 0;
}