# Searching
___
## Binary Search
- [Source code](./binarysearch.cpp)

- Binary search is a searching algorithm that works efficiently with a sorted list. This popular search technique searches the given _item_ in minimum possible comparisons. The _binary search_ requires the array, to be scanned, must be sorted in any order. In binary search, the _item_ is searched for in smaller _segment_(nearly half the previous segment) after every stage. For the first stage, the segment contains the entire array.

- **Time Complexity**	
    - The time complexity of Binary Search can be written as 

            T(n) = T(n/2) + c  
    
        The above recurrence can be solved either using the Recurrence Tree method or Master method. It falls in case II of the Master Method and the solution of the recurrence is

            Theta(Logn)

        |Case    |Complexity|Description|
        |--------|----------|-----------|
        |Best	 |  O(1)   |When the central index would directly match the desired value.|
        |Worst	 |  O(log n)   |When the element to be searched is present anywhere|

- **Space Complexity O(1)**
    - This is because we need two variable to keep track of the range of elements that are to be checked. No other data is needed.

## Linear Search
- [Source code](./linear_search)

- Linear Search is a searching algorithm in which it sequentially checks each element of the list until a match is found or the whole list has been searched.
- A _linear search_ runs in at worst linear time and makes at most n comparisons, where n is the length of the list. If each element is equally likely to be searched, then linear search has **an average case of 
n+1
/
2**
 comparisons, but the average case can be affected if the search probabilities for each element vary.
[[Wikipedia]](./https://en.wikipedia.org/wiki/Linear_search)
