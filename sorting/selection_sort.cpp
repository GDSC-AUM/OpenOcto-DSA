#include <iostream>

using namespace std;

void selection_sort(int arr[], int size)
{
    int min_idx;     // Index of minimum element in the unsorted subarray 

    for(int i=0; i<size-1; i++)
    {
        min_idx = i;
        
        // Finding index of minimum element in unsorted subarray
        // and storing that index in min_idx
        for(int j=i+1; j<size; j++)
        {
            if(arr[j] < arr[min_idx])
                min_idx = j;
        }

        // Swapping i'th array element with minimum element of unsorted subarray
        swap(arr[i], arr[min_idx]);
    }
}

int main()
{
    int arr[] = {46, 37, 49, 12, 3, 27, 23};
    int size = sizeof(arr)/sizeof(arr[0]);

    cout<<"Original Array : ";
    for(int i=0; i<size; i++)
        cout<<arr[i]<<" ";

    selection_sort(arr, size);

    cout<<"\nSorted Array : ";
    for(int i=0; i<size; i++)
        cout<<arr[i]<<" ";
    
    return 0;
}