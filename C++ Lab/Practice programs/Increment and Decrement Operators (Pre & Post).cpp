/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream> 
using namespace std; 
  
int main() 
{ 
    int x = 10, a; 
  
    a = ++x; 
    
    cout << "Pre Increment Operation"; 
  
    cout << "\na = " << a; 
 
    cout << "\nx = " << x;
    
    a = x++; 
  
    cout << "\nPost Increment Operation"; 
  
    cout << "\na = " << a; 
  
    cout << "\nx = " << x; 
  
    return 0; 
} 