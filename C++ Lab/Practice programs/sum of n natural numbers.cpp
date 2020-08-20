/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<iostream>
using namespace std;
int main()
{
	int i,n,sum=0;
	cout<<"Enter the number of natural numbers ";
	cin>>n;
 
	for(i=1;i<=n;++i)
	{
		sum+=i;
	}
	
	cout<<"Sum="<<sum;
	return 0;
}