/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
int main()
{
    int n;
    int sum = 0;
    int num;
    cout << "Enter number of numbers to input:  ";
    cin >> n;
    for(int x = 0; x < n; x++)
    {
        int digits = 0;
	cout << "Enter a number:  ";
        cin >> num;
        int numT = num;
        while(numT > 0)
        {
            numT /= 10;
            digits++;
        }
        if(digits % 2 == 0)
            sum += num;
    }
    cout << "Sum of all numbers:  " << sum << endl;
    return 0;
}