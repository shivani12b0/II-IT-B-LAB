/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
 
int main() 
{
    int i, count, sum, inputArray[500];
    float average;
    cout << "Enter number of elements\n";
    cin >> count;
    cout << "Enter " << count << " elements\n";
    for(i = 0; i < count; i++) 
    {
        cin >> inputArray[i];
    }
    sum = 0;
    for(i = 0; i < count; i++) 
    {
        sum += inputArray[i];
    }
    average = (float)sum / count;
    cout << "Average = " << average;
    return 0;
}