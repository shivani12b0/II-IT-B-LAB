/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
 
int main()
{
int num1,num2;
	cout << " Input the first integer: ";
	cin>> num1;
	cout << " Input the second integer: ";
	cin>> num2;	
	
		if ( num1 == num2 )           
            cout<< num1<< " == " << num2 <<endl;  
        if ( num1 != num2 )          
            cout<< num1<<" != " << num2<<endl; 
        if ( num1 < num2 )          
            cout<< num1<< " < "<<num2<<endl; 
        if ( num1 > num2 )          
            cout<< num1<<" > "<< num2 <<endl; 
   return 0;
}