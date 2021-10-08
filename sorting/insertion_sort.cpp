// C++ program for insertion sort
#include <iostream>
using namespace std;

/* Function to sort an array using insertion sort*/
void insertionSort(int arr[], int n)
{
	int i, temp, j;
	for (i = 1; i < n; i++)
	{
		temp = arr[i];
		j = i - 1;

		                                     //algorithm for insertion sort
		while (j >= 0 && arr[j] > temp)
		{
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = temp;
	}
}




int main()
{
	int arr[] = { 13,5,25,7,34,56,8 };
	int n = sizeof(arr) / sizeof(arr[0]);

	insertionSort(arr, n);
    int i;
	for (i = 0; i < n; i++)
		cout << arr[i] << " ";
	cout << endl;

	return 0;
}
