/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int iterativeBinarySearch(int array[], int start_index, int end_index, int element){
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
int main(void){
   int array[] = {12, 61, 33, 92, 36, 3, 29, 98, 54, 60};
   int a,i,j;
   int n = 10;
   for(i = 0; i < n; ++i)
   {
       for(j = i + 1; j < n-1; ++j)
       {
           if(array[i] > array[j])
           {
               a = array[i];
               array[i] = array[j];
               array[j] = a; 
           }
       }
   }
   int element = 12;
   int found_index = iterativeBinarySearch(array, 0, n-1, element);
   if(found_index == -1 ) 
   {
      printf("Element not found in the array ");
   }
   else 
   {
      printf("Element found at index : %d",found_index);
   }
   return 0;
}