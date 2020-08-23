/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include<iostream>
using namespace std; 
int function();
int main()
{
       int number;
       number = function();
       cout<<number<<" is the number you entered";
       return 0;
}
    int function()
       {
           int n;
           cout<<"\n Enter a number : ";
           cin>>n;
           return n;
       }