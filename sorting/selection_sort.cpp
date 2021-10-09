//program for selection sort
#include <iostream>
typedef long long ll;
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;//size of the array
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    for(int i=0;i<n-1;i++)
    {
        int mini=i;
        for(int j=i+1;j<n;j++)
        {
            if(a[mini]>a[j])
            mini=j;
        }
        if(mini!=i)
        {
            int temp=a[mini];
            a[mini]=a[i];
            a[i]=temp;
        }
    }
    cout<<"The sorted array is: ";
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";//printing the elements of the array in sorted order
    return 0;
}


/*
Input:
6
1 15 40 61 77 100
Output:
The sorted array is: 1 15 40 61 77 100

Complexity of the program: O(n^2)
*/
