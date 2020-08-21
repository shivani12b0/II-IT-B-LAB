/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
int main()
{
    int sum = 0, n, count = 0;
    float avg = 0;
    while(n > 0)
    {
        cout << "Enter a number: ";
        cin >> n;
        count++;
        if (n < 0)
        {
            goto jump;
        }
        sum += n;
        avg = sum / count;
    }
    jump:
    cout<<"Sum: "<<sum<<endl;
    cout<<"Average: "<<avg<<endl;
    return 0;
}