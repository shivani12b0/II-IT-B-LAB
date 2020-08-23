/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
int main()
{
    void function(); 
    function(); 
    cout<<"No parameter and no return type \n";
    function();
    return 0;
}

void function(void) 
{
     for (int i=1;i<50;i++)
     cout<<"*";
     cout<<"\n";
}