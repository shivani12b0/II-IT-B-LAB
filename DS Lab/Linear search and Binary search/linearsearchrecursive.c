/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<stdio.h> 
int RecursiveLinearSearch(int array[], int start_index, int end_index, int element) 
{ 
     if (end_index < start_index) 
        return -1; 
     if (array[start_index] == element) 
        return start_index; 
     if (array[end_index] == element) 
        return end_index; 
     return RecursiveLinearSearch(array, start_index+1, end_index-1, element); 
} 
  
int main() 
{ 
    int array[] = {12, 61, 33, 92, 36, 3, 29, 98, 54, 60}; 
    int n = 10;
    int element = 100; 
    int index = RecursiveLinearSearch(array, 0, n-1, element); 
    if (index != -1) 
       printf("Element %d is present at index %d", element, index); 
    else
        printf("Element %d is not present", element); 
    return 0; 
} 