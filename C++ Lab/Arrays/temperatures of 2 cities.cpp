/*************************************** ***************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
const int CITY = 2;
const int WEEK = 7;
int main()
{
    int temperature[CITY][WEEK];
    cout << "Enter all the temperature of a week of first city and then second city. \n";
    for (int i = 0; i < CITY; ++i)
    {
        for(int j = 0; j < WEEK; ++j)
        {
            cout << "City " << i + 1 << ", Day " << j + 1 << " : ";
            cin >> temperature[i][j];
        }
    }
    cout << "\nDisplaying Values:\n";
    for (int i = 0; i < CITY; ++i)
    {
        for(int j = 0; j < WEEK; ++j)
        {
            cout << "City " << i + 1 << ", Day " << j + 1 << " = " << temperature[i][j] << endl;
        }
    }
    return 0;
}