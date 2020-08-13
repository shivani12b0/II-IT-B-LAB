/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<stdio.h>
int RecursiveLinearSearch(int array[], int value, int index, int n)
{
    int pos = 0;
    if(index >= n)
    {
        return 0;
    }
    else if (array[index] == value)
    {
        pos = index + 1;
        return pos;
    }
    return RecursiveLinearSearch(array, value, index+1, n);
}
int main()
{
    int pos;
    int n = 10;
    int array[] = {12, 61, 33, 92, 36, 3, 29, 98, 54, 60};
    
    int element = 36;
    pos =  RecursiveLinearSearch(array, element, 0, n);
    if (pos != 0)
    {
        printf("Element %d found at position %d ", element, pos);
    }
    else
    {
        printf("Element %d not found",element);
    }
    return 0;
}