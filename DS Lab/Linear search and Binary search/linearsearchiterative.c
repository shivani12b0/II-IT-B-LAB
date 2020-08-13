/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<stdio.h> 
int IterativeLinearSearch(int array[], int n, int element) 
{ 
    int i; 
    for(i = 0; i < n; i++) 
        if(array[i] == element) 
            return i; 
    return -1; 
} 
int main(void) 
{ 
    int array[] = {12, 61, 33, 92, 36, 3, 29, 98, 54, 60}; 
    int n = 10;
    int element = 36; 
    int index = IterativeLinearSearch(array, n, element); 
    if (index != -1) 
       printf("Element %d is present at index %d", element, index); 
    else
        printf("Element %d is not present", element); 
    return 0; 
} 