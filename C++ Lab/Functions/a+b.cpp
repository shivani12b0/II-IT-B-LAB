/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
int addition(int a,int b);
int main()
{
	int num1;	
	int num2;	
	int add;
	
	cout<<"Enter first number: ";
	cin>>num1;
	cout<<"Enter second number: ";
	cin>>num2;
	
	add=addition(num1,num2);
	cout<<"Addition of the entered numbers is: "<<add<<endl;
	return 0;
}
int addition(int a,int b)
{
	return (a+b);
}