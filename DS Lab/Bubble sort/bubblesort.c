/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int main()
{
  int array[100], n, i, j, k=1, swap;
  printf("Enter number of elements\n");
  scanf("%d", &n);
  printf("Enter %d integers\n", n);
  for (i = 0; i < n; i++)
    scanf("%d", &array[i]);
  for (i = 0; i < n; i++)
  {
    if(array[i] > array[i+1])
    {
        k = 0;
        break;
    }
  }
  if(k==1)
  {
    printf("The elements are already sorted\n");
  }
  else{
  for (i = 0 ; i < n - 1; i++)
  {
    for (j = 0 ; j < n - i - 1; j++)
    {
      if (array[j] > array[j+1]) 
      {
        swap  = array[j];
        array[j]   = array[j+1];
        array[j+1] = swap;
      }    
    }
  }
  printf("Sorted list in ascending order:\n");
  for (i = 0; i < n; i++)
     printf("%d\n", array[i]);
  }
  return 0;
}