# Sorting

## Bubble Sort

- [Source code](./bubble_sort.cpp)

- Bubble sort, sometimes referred to as sinking sort, is a simple sorting algorithm that repeatedly steps through the list, compares adjacent elements and swaps them if they are in the wrong order. The pass through the list is repeated until the list is sorted. The algorithm, which is a comparison sort, is named for the way smaller or larger elements "bubble" to the top of the list. [[Wikipedia](https://en.wikipedia.org/wiki/Bubble_sort)]


## Insertion Sort

-  [Source code](./insertion_sort.cpp)

- Insertion sort is a simple sorting algorithm that builds the final sorted array (or list) one item at a time. It is much less efficient on large lists than more advanced algorithms such as quicksort, heapsort, or merge sort. However, insertion sort provides several advantages. [[Wikipedia](https://en.wikipedia.org/wiki/Insertion_sort)]


## Quick Sort

- [Source code](./quick_sort.cpp)

- Quicksort is a divide-and-conquer algorithm. It works by selecting a `pivot` element from the array and partitioning the other elements into two sub-arrays, according to whether they are less than or greater than the pivot. It is also sometimes called partition-exchange sort. The sub-arrays are then sorted recursively. This can be done in-place, requiring small additional amounts of memory to perform the sorting. **Time Complexity** --> Average case: **O(n log n)**  ||  Worst case: **O(n<sup>2</sup>)**
 [[Wikipedia](https://en.wikipedia.org/wiki/Quicksort)]


## Selection Sort
- [Source code](./selection_sort.cpp)

- Selection sort is a simple sorting that gives the final sorted array one item at a time. It has the time complexity of O(n^2) therefore it is much slower than quick sort, merge sort, heap sort. [[Wikipedia](https://en.wikipedia.org/wiki/Selection_sort)]
