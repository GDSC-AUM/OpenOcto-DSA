#include <iostream> // std::cout
using namespace std;

// merge fuction
void merge(int arr[], int lb, int mid, int ub, int n)
{
    int temp[n];
    int i = lb;
    int j = mid + 1; 
    int k = lb;

    while (i <= mid && j <= ub)
    {
        if (arr[i] <= arr[j])
        {
            temp[k] = arr[i];
            i++;
            k++;
        }
        else
        {
            temp[k] = arr[j];
            j++;
            k++;
        }
    }
    while (j <= ub)
    {
        temp[k] = arr[j];
        j++;
        k++;
    }
    while (i <= mid)
    {
        temp[k] = arr[i];
        i++;
        k++;
    }

    for (int p = lb; p <= ub; p++)
    {
        arr[p] = temp[p];
    }
}

// mergesort function
void mergeSort(int arr[], int lb, int ub, int size)
{
    if (lb < ub)
    {
        int mid = (lb + ub) / 2;
        mergeSort(arr, lb, mid, size);
        mergeSort(arr, mid + 1, ub, size);
        merge(arr, lb, mid, ub, size);
    }
}

int main()
{
    int n;
    cout << "Enter number of elements:\n";
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    mergeSort(arr, 0, n - 1, n);
    for (int j = 0; j < n; j++)
    {
        cout << arr[j] << " ";
    }
}