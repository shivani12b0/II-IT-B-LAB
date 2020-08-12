/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<stdio.h> 
int IterativeLinearSearch(int array[], int start_index, int end_index, int element) 
{
    while (start_index <= end_index){
      int middle = start_index + (end_index- start_index )/2;
      if (array[middle] == element)
         return middle;
      if (array[middle] < element)
         start_index = middle + 1;
      else
         end_index = middle - 1;
   }
   return -1;
}
int main() 
{ 
    int array[] = {12, 61, 33, 92, 36, 3, 29, 98, 54, 60}; 
    int n = 10;
    int element = 100; 
    int index = IterativeLinearSearch(array, 0, n-1, element); 
    if (index != -1) 
       printf("Element %d is present at index %d", element, index); 
    else
        printf("Element %d is not present", element); 
    return 0; 
} 