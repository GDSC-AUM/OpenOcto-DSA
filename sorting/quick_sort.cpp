#include <iostream>  // std::cout
#include <algorithm> // std::swap
#include <vector>    // std::vector

using namespace std;

// partition the array using last element as pivot
int partition(vector<int> &arr, int low, int high)
{
    int pivot = arr[high]; // pivot
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++)
    {
        //if current element is smaller than pivot, increment the low element
        //swap elements at i and j
        if (arr[j] <= pivot)
        {
            i++; // increment index of smaller element
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return (i + 1);
}

//quicksort algorithm
void quickSort(vector<int> &arr, int low, int high)
{
    if (low < high)
    {
        //partition the array
        int pivot = partition(arr, low, high);

        //sort the sub arrays independently
        quickSort(arr, low, pivot - 1);
        quickSort(arr, pivot + 1, high);
    }
}

void displayArray(vector<int> arr)
{
    for (auto it : arr)
        cout << it << "\t";
}

int main()
{
    vector<int> arr = {12, 23, 3, 43, 51, 35, 19, 45};
    int n = arr.size();
    cout << "Input array" << endl;
    displayArray(arr);
    cout << endl;
    quickSort(arr, 0, n - 1);
    cout << "Array sorted with quick sort" << endl;
    displayArray(arr);
    return 0;
}