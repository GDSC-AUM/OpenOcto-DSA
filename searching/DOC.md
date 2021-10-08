# Searching
___
Searching means to find whether a particular value is present in an array or not. If the value is 
present in the array, then searching is said to be **successful** and the searching process gives the 
location of that value in the array. However, if the value is not present in the array, the searching 
process displays an appropriate message and in this case searching is said to be **unsuccessful**.

Based on the type of search operation, these algorithms are generally classified into two categories:

**Sequential Search**: In this, the list or array is traversed sequentially and every element is checked.

For example: Linear Search.
**Interval Search**: These algorithms are specifically designed for searching in sorted data-structures. These type of searching algorithms are much more efficient than Linear Search as they repeatedly target the center of the search structure and divide the search space in half. 

For Example: Binary Search.

The algorithm that should be used depends entirely on how the values are organized in the array. 
For example, if the elements of the array are arranged in ascending order, then binary search 
should be used, as it is more efficient for sorted lists in terms of complexity. We will discuss Binary Search in detail in this section.

### Topic to be covered:
---
1.	Basics of Binary Search
2.	Algorithm and pseudo code of Binary Search
3.	How does Binary Search work with an example. 
4.	Time complexity of Binary Search
5.	Space complexity of Binary Search
6.	Advantages of Binary Search
7.	Disadvantages of Binary Search 
8.  Binary Search Applications

# Binary Search
>## 1. Basics of Binary Search
Binary search is a searching algorithm that works efficiently with a sorted list. The mechanism 
of binary search can be better understood by an analogy of a telephone directory. When we are 
searching for a particular name in a directory, we first open the directory from the middle and 
then decide whether to look for the name in the first part of the directory or in the second part of 
the directory. Again, we open some page in the middle and the whole process is repeated until 
we finally find the right name.

The same mechanism is applied in the binary search.
>## 2.1 Algorithm

Step 1 − Set beg=0 and end=size of the array

Step 2 − Run a while loop till beg is less than equal to the end

Step 3 − In while loop calculte mid=(beg*end)/2 and search for the key if key is found at middle position we break from the loop 

else if key is less than mid then make end equal to mid -1 
else make beg equal to mid+1

Step 4 −Check if the while loop broken or terminated if it was broken then print "FOUND"
else if the loop got executed fully then the element is not found in the array

Step 5 − Exit from the program

>## 2.2 Pseudocode

Pseudo code for Binary Search:

INARY_SEARCH(A, lower_bound, upper_bound, VAL)

**Step 1:** [INITIALIZE] SET BEG = lower_bound
END = upper_bound, POS=-1

**Step 2:** Repeat Steps 3 and 4 while BEG <= END

**Step 3:** SET MID = (BEG + END)/2

**Step 4:** IF A[MID] = VAL
SET POS = MID
PRINT POS

Go to Step 6
ELSE IF A[MID] > VAL
SET END = MID-1

ELSE
SET BEG = MID+1
[END OF IF]

[END OF LOOP]

**Step 5:** IF POS=-1
PRINT “VALUE IS NOT PRESENT IN THE ARRAY”
[END OF IF]

**Step 6:** EXIT

>## 3. Working of Binary Search

Now, let us consider how this mechanism is applied to search for a value in a sorted array. 
Consider an array A[] that is declared and initialized as

	int A[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

and the value to be searched is VAL = 9. 
The algorithm will proceed in the following manner.

BEG = 0, END = 10, MID = (0 + 10)/2 = 5
Now, VAL = 9 and A[MID] = A[5] = 5

A[5] is less than VAL, therefore, we now search for the value in the second half of the array. So, 
we change the values of BEG and MID.

Now, BEG = MID + 1 = 6, END = 10, MID = (6 + 10)/2 =16/2 = 8
VAL = 9 and A[MID] = A[8] = 8

A[8] is less than VAL, therefore, we now search for the value in the second half of the segment. 
So, again we change the values of BEG and MID.

Now, BEG = MID + 1 = 9, END = 10, MID = (9 + 10)/2 = 9
Now, VAL = 9 and A[MID] = 9.

In this algorithm, we see that BEG and END are the beginning and ending positions of the segment 
that we are looking to search for the element. MID is calculated as (BEG + END)/2. Initially, BEG = 
lower_bound and END = upper_bound. The algorithm will terminate when A[MID] = VAL. When the 
algorithm ends, we will set POS = MID.

POS is the position at which the value is present in the array.
However, if VAL is not equal to A[MID], then the values of BEG, END, and MID will be changed 
depending on whether VAL is smaller or greater than A[MID].

(a) If VAL < A[MID], then VAL will be present in the left segment of the array. So, the value of END
will be changed as END = MID – 1.

(b) If VAL > A[MID], then VAL will be present in the right segment of the array. So, the value of BEG will be changed as BEG = MID + 1.

Finally, if VAL is not present in the array, then eventually, END will be less than BEG. When this 
happens, the algorithm will terminate and the search will be unsuccessful. 

# Function:
## Running Tests

To run tests, run the following command
___
```C++
//binary search
#include<iostream>
using namespace std;
void binary(int a[],int n,int val)
{
	int mid=n/2,beg=0,end=n-1,f=0;
	while(beg<end)
	{
		mid=beg+end/2;
		if(val==a[mid])
		{
		f=1;
		break;
		}
		else if(val<a[mid])
		end=mid;
		else
		beg=mid;
	}
	if(f==1)
	cout<<"FOUND";
	else
	cout<<"NOT FOUND";
	
}

int main()
{
	int i,n,f;
	cout<<"enter the number of elements you want to enter"<<endl;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<endl<<"enter the element you want to find"<<endl;
	cin>>f;
	binary(a,n,f);
	
	return 0;
}
```

>## 4. Time Complexity	

The time complexity of Binary Search can be written as 

    T(n) = T(n/2) + c  
The above recurrence can be solved either using the Recurrence Tree method or Master method. It falls in case II of the Master Method and the solution of the recurrence is

    Theta(Logn) .

|Case    |Complexity|Description|
|--------|----------|-----------|
|Best	 |  O(1)   |When the central index would directly match the desired value.|
|Worst	 |  O(log n)   |When the element to be searched is present anywhere|



>## 5. Space Complexity	O(1)
This is because we need two variable to keep track of the range of elements that are to be checked. No other data is needed.

>## 6. Advantages of Binary Search
* The main advantage of using binary search is that it does not scan each element in the list.
* It is more efficient in the case of large-size data sets.
* In a binary search, the worst-case scenario for finding the element is O(log2n).
* It can be implemented only on a multidimensional array.
>## 7. Disadvantages of Binary Search

* It is applicable only for sorted array or list.
* It employs recursive approach which requires more stack space.
* Programming binary search algorithm is error prone and difficult.
* The interaction of binary search with memory hierarchy i.e. caching is poor.

>## Binary Search Applications

* This algorithm is used to search element in a given sorted array with more efficiency.

* It could also be used for few other additional operations like- to find the smallest element in the array or to find the largest element in the arrays