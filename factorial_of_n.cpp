//C++ program for factorial of a number
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
    int fact=1;
    for(int i=1;i<=n;i++)
    fact=fact*i;
    cout<<"The factorial is ";
    cout<<fact;
    return 0;
}

/*
Input:
6
Output:
The factorial is 720

Complexity of the program: O(n)
*/
