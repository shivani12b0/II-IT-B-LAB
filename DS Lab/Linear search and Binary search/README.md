#  Linear Search and Binary search


## Aim of the Experiment
Write a program that use both recursive and non-recursive functions to perform the following searching operations for a Key value in a given list of integers:
Array : 12, 61, 33, 92, 36, 3, 29, 98, 54, 60
(i) Linear search
Key element to be searched : 36, 100
(ii) Binary search
Key element to be searched : 12, 92, 33


### Brief description of Linear search and Binary search
Searching is the process used to find the location of a target among a list of objects.
There are two basic searches for arrays:
1. The linear search : In the linear search , we start searching for the target from the
   beginning of the list, and we continue until the we find the target or
   until we are sure that it is not in the list.

2. The binary search : The binary search starts by testing the data in the element at the middle of the list. 
   This determines if the target is in first half or second half of the list.
   If it is in first half , we do not need to check the second half.
   If it is in second half , we do not need to check the first half.
   In other words ,either way we eliminate half the list from further consideration.
   We repeat this process until we find the target or satisfy ourselves
   that it is not in the list. 
   To find the middle of the list we three variables,
   one to identify the beginning of the list(first),
   one to identify the beginning of the list(mid),
   one to identify the beginning of the list(last),
   where mid=( first + last )/2
   

#### Step-by-step procedure
##### Linear search
###### 1.start
###### 2.read n
###### 3.read elements of list (a[])
###### 4.read element to be searched(item)
###### 5.initialize found=0
###### 6. for(i=0;i<n;i++)
###### 7. {
###### If(a[i]==item)
###### {
###### found=1
###### Break
###### }
###### }
###### 8.if (found==1)
###### then print element a[i] is found i th location
###### else
###### print element not found
###### 9.stop

##### Binary search
###### 1.start
###### 2.read n
###### 3.read elements of list (a[])
###### 4.read first = 0 last = n - 1,  mid
###### 5.read element to be searched(item)
###### 6.while ( first <= last ) {
###### 7.mid = (first + last) / 2;
###### if ( a[mid] == target )
###### return mid;
###### if ( a[mid] > target )
###### last = mid - 1;
###### else
###### first = mid + 1;
###### }
###### return -1:
###### }
###### 8.if (found==1)
###### then print element a[i] is found i th location
###### else
###### print element not found
###### 9.stop

## Output obtained
### Linear search (Iterative) output 1
#### Procedure of obtaining output:
##### In case of linear search,
###### 1. Read the number of array elements and the elements of the array.(here array = 12, 61, 33, 92, 36, 3, 29, 98, 54, 60, n = 10)
###### 2. The key element to be searched to be entered.(here it is 36)
###### 3. The complier searches the key element from the given array, beginning with the first element.
###### 4. It matches the key element with the elements present in the array.
###### 5. If the key element and element in the array are equal, the output is obtained as 'The key element is found in the index '
###### 6. And if the key element is not matched with any element of the array, it returns as 'The key element is not found'
###### 7. In this case, it prints '36 is found at the index 4' as the element is present in the given array.
![output](linearsearchiterativeoutput1.png)
##### Linear search (Iterative) output 2
#### Procedure of obtaining output:
##### In case of linear search,
###### 1. Read the number of array elements and the elements of the array.(here array = 12, 61, 33, 92, 36, 3, 29, 98, 54, 60, n = 10)
###### 2. The key element to be searched to be entered.(here it is 100)
###### 3. The complier searches the key element from the given array, beginning with the first element.
###### 4. It matches the key element with the elements present in the array.
###### 5. If the key element and element in the array are equal, the output is obtained as 'The key element is found in the index '
###### 6. And if the key element is not matched with any element of the array, it returns as 'The key element is not found'
###### 7. In this case, it prints '100 is not found' as the element is absent in the given array.
![output](linearsearchiterativeoutput2.png)
##### Linear search (Recursive) output 1
![output](linearsearchrecursiveoutput1.png)
##### Linear search (Recursive) output 2
![output](linearsearchrecursiveoutput2.png)
##### Binary search (Iterative) output 1
![output](binarysearchiterativeoutput1.png)
##### Binary search (Iterative) output 2
![output](binarysearchiterativeoutput2.png)
##### Binary search (Iterative) output 3
![output](binarysearchiterativeoutput3.png)
##### Binary search (Recursive) output 1
![output](binarysearchrecursiveoutput1.png)
##### Binary search (Recursive) output 2
![output](binarysearchrecursiveoutput2.png)
##### Binary search (Recursive) output 3
![output](binarysearchrecursiveoutput3.png)
