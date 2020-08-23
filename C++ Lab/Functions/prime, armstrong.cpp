/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>
#include <cmath>
using namespace std;
int checkPrimeNumber(int n);
int checkArmstrongNumber(int n);
int main()
{
    int n, flag;
    cout << "Enter a positive integer: ";
    cin >> n;
    flag = checkPrimeNumber(n);
    if (flag == 1)
    {
        cout << "is a prime number," << n;
    }
    else
    {
        cout << "is not a prime number,";
    }
    flag = checkArmstrongNumber(n);
    if (flag == 1)
    {
        cout << "is an Armstrong number." << n;
    }
    else
    {
        cout << "is not an Armstrong number.";
    }
    return 0;
}
int checkPrimeNumber(int n) 
{
    int i, flag = 1, squareRoot;
    squareRoot = sqrt(n);
    cout<<"Square root of "<<n<<" is ";
    cout << squareRoot<<endl;
    for (i = 2; i <= squareRoot; i++) 
    {
        if (n % i == 0) 
        {
            flag = 0;
            break;
        }
    }
    return flag;
}
int checkArmstrongNumber(int num) 
{
    int originalNum, rem, n = 0, flag;
    double result = 0;
    for (originalNum = num; originalNum != 0; ++n) 
    {
        originalNum /= 10;
    }
    for (originalNum = num; originalNum != 0; originalNum /= 10) 
    {
        rem = originalNum % 10;
        result += pow(rem, n);
    }
    if(result == num)
    {
        flag = 1;
    }
    else
    {
        flag = 0;   
    }
    return flag;
}