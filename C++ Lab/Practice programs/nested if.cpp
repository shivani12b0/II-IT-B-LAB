/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream> 
using namespace std; 
  
int main()  
{ 
    int n = 10; 
  
    if (n == 10) 
    { 
        if (n < 15) 
           cout<<"10 is smaller than 15\n"; 
        // Will only be executed if statement above 
        if (n < 12) 
            cout<<"10 is smaller than 12 too\n"; 
        else
            cout<<"10 is greater than 15"; 
    } 
    return 0; 
} 