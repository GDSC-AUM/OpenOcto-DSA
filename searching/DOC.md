# Searching
___
## Binary Search
- [Source code](./binarysearch.cpp)

Binary search is a searching algorithm that works efficiently with a sorted list. This popular search technique searches the given _item_ in minimum possible comparisons. The _binary search_ requires the array, to be scanned, must be sorted in any order. In binary search, the _item_ is searched for in smaller _segment_(nearly half the previous segment) after every stage. For the first stage, the segment contains the entire array.

#### Time Complexity	

The time complexity of Binary Search can be written as 

    T(n) = T(n/2) + c  
The above recurrence can be solved either using the Recurrence Tree method or Master method. It falls in case II of the Master Method and the solution of the recurrence is

    Theta(Logn) .

|Case    |Complexity|Description|
|--------|----------|-----------|
|Best	 |  O(1)   |When the central index would directly match the desired value.|
|Worst	 |  O(log n)   |When the element to be searched is present anywhere|



#### Space Complexity O(1)
This is because we need two variable to keep track of the range of elements that are to be checked. No other data is needed.
