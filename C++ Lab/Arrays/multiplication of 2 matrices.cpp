/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

int main()
{
    int r, c, a[100][100], b[100][100], mul[100][100], i, j, k;
    cout << "Enter number of rows (between 1 and 100): ";
    cin >> r;
    cout << "Enter number of columns (between 1 and 100): ";
    cin >> c;
    cout << endl << "Enter elements of 1st matrix: " << endl;
    for(i = 0; i < r; ++i)
       for(j = 0; j < c; ++j)
       {
           cout << "Enter element a" << i + 1 << j + 1 << " : ";
           cin >> a[i][j];
       }
    cout << endl << "Enter elements of 2nd matrix: " << endl;
    for(i = 0; i < r; ++i)
       for(j = 0; j < c; ++j)
       {
           cout << "Enter element b" << i + 1 << j + 1 << " : ";
           cin >> b[i][j];
       }
       cout << endl << "Multiplication of two matrix is: " << endl;
       for(i=0;i<r;i++)    
       {
           for(j=0;j<c;j++)    
           {
               mul[i][j]=0;    
               for(k=0;k<c;k++)    
               {
                   mul[i][j]+=a[i][k]*b[k][j];    
               }    
            }    
        }
        for(i=0;i<r;i++)    
        {
            for(j=0;j<c;j++)    
            {
                cout<<mul[i][j]<<" ";    
            }    
                cout<<"\n";    
        }    
    return 0;
}