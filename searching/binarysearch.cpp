//binary search
#include <iostream>
using namespace std;

//function for binary search
void binary_search(int a[], int n, int val)
{
	int mid = n / 2, beg = 0, end = n - 1, f = 0;
	while (beg < end)
	{
		mid = beg + end / 2;
		if (val == a[mid])
		{
			f = 1;
			break;
		}
		else if (val < a[mid])
			end = mid;
		else
			beg = mid;
	}
	if (f == 1)
		cout << "FOUND";
	else
		cout << "NOT FOUND";
}

int main()
{
	cout << "----------------------------------THIS PROGRAM IS ABOUT BINARY SEARCH----------------------------------" << endl;
	int i, n, f;
	cout << "Enter the number of elements you want to enter" << endl
		 << "n: ";
	cin >> n;
	cout << "Enter " << n << " elements in sorted order" << endl;
	int array[n];
	for (i = 0; i < n; i++)
	{
		cin >> array[i];
	}
	cout << endl
		 << "Enter the element you want to find" << endl;
	cin >> f;
	binary_search(array, n, f);

	return 0;
}
