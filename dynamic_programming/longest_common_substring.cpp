// include header file for standard input output
#include <iostream>
using namespace std;

// The main function
int main()
{
    // Take two strings from user
    string s1, s2;
    cout << "Enter first string: \n";
    cin >> s1;
    cout << "Enter second string: \n";
    cin >> s2;

    /*
    We create a dp array that stores the length of longest common substring "ending" at
    ith index in s1 and jth index in s2 at position dp[i+1][j+1]

    If s1[i] is not same as s2[j] length of common substring which ends at the ith and jth
    position is 0, hence we set dp[i+1][j+1] = 0
    */
    int **dp = new int *[s1.length() + 1];

    for (int i = 0; i <= s1.length(); i++)
    {
        dp[i] = new int[s2.length() + 1];

        for (int j = 0; j <= s2.length(); j++)
        {
            dp[i][j] = 0;
        }
    }

    int ans = 0;
    for (int i = 1; i <= s1.length(); i++)
    {   
        for (int j = 1; j <= s2.length(); j++)
        {
            // jth iteration in ith iteration corresponds to index j-1 and i-1
            if (s1[i-1] == s2[j-1])
            {   
                // if we find that last element is equal then we increase the length by 1 
                dp[i][j] = dp[i - 1][j - 1] + 1;
            }
            else
            {
                dp[i][j] = 0;
            }

            // we can calculate the maximum length of common substring in this loop itself
            if(dp[i][j] > ans) ans = dp[i][j];
        }
    }

    cout << "The length of longest common substring is : " << ans;

    return 0;
}