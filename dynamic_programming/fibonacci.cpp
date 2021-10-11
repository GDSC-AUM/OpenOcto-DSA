// include standard input output header
#include <iostream>
using namespace std;

// The main function
int main(){

    cout << "Enter the number n: (n th number in fibonacci sequence will be printed) \n";
    int n;
    cin >> n;

    // create a dp array to store the ith fibonacci numbers at ith index
    // size is taken n+2 to avoid any corner cases;
    int dp[n+3];
    dp[0] = 0;
    dp[1] = 0;
    dp[2] = 1;
    
    // the dynamic programming algorithm to calculate ith fibonacci number 
    // using (i-1)th and (i-2)th fibonacci number
    for(int i = 3; i <= n; i++){
        dp[i] = dp[i-1] + dp[i-2];
    }

    cout << "Fibonacci number at position " << n <<  " is : " << dp[n];

    return 0;
}