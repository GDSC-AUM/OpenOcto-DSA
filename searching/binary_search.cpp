#include<bits/stdc++.h>
using namespace std;

int
binary_search (vector < int >&arr, int t)
{
  int n = arr.size ();
  int low = 0, high = n - 1, mid;	// initially low is pointing to the first index and high to the last index of an array;
  while (low <= high)
    {
      mid = (low + high) >> 1;	// here we are calculating out the  middle index
      if (arr[mid] == t)
	return mid;
      else if (arr[mid] < t)//if our arr[mid] is smaller than the target element we will change the value of low to mid+1;
	low = mid + 1;
      else
	high = mid - 1; //if our arr[mid] is greater than the target element we will change the value of high to mid-1;



    }
  return -1;


}


int
main ()
{
  int n, t;
  cin >> n;
  vector < int >arr (n);
  for (int i = 0; i < n; i++)// please provide the sorted array as binary_search only works on sorted array irrespective of asc or dsc order 
    {
      cin >> arr[i];
    }

  cin >> t;

  int ans = binary_search (arr, t);
  cout<<ans<<endl;
  return 0;
}
