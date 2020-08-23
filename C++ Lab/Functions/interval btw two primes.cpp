/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>
using namespace std;
int main()
{
    int num1, num2, i, flag;
    cout << "Enter two numbers(intervals): ";
    cin >> num1 >> num2;
    cout << "Prime numbers between " << num1 << " and " << num2 << " are: ";
    while (num1 < num2)
    {
        flag = 0;
        for(i = 2; i <= num1/2; ++i)
        {
            if(num1 % i == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
            cout << num1 << " ";
        num1++;
    }
    return 0;
}