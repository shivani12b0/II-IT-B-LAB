/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

int main() {
    int a = 5;
    int b = 9;

    cout << ((a == 5) && (a > b)) << endl;

    cout << ((a == 5) && (a < b)) << endl;

    cout << ((a == 5) || (a > b)) << endl;

    cout << ((a == 5) || (a < b)) << endl;
    
    cout << !(a == 0) << endl;

    cout << !(a == 5) << endl;

    return 0;
}