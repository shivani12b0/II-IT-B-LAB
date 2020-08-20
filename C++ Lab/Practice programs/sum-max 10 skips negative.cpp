/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<iostream>
using namespace std;
int main()
{
  int num[100];
  double sum = 0;
  int i = 0;
  int n;
  
  cout << "How many numbers?";
  cin >> n;

  cout << "Enter the numbers :: ";
  for (i = 0; i < n; i++)
  {
  cin >> num[i];
  }
  for (i = 0; i < n; i++)
  {
      if (num[i] < 0)
      {
          cout << "Invalid!";
          continue;
      }
       sum += num[i];
  }
    cout << "\nThe sum is " << sum << endl;
    return 0;
}