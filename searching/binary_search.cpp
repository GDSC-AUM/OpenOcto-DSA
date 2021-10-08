//program for binary search
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;//size of array
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];//input elements in sorted order
    int x;
    cin>>x;//input element to be searched
    int l=0,r=n-1;
    while(l<=r)
    {
        int m=(l+r)/2;
        if(a[m]==x)
        {
            cout<<"Element found at position "<<m+1;
            break;
        }
        else if(a[m]<x){
            l=m+1;
        }
        else
        r=m-1;
    }
    if(l>r)
    {
        cout<<"Element not found";
    }
    return 0;
}


/*
Input:
6
1 15 40 61 77 100
61
Output:
Element found at position 4

Complexity of the program: O(logn)
*/
