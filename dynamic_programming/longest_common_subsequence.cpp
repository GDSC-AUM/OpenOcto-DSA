#include <bits/stdc++.h>

using namespace std;

//Recursive LCS
int recursiveLCS(string s, string p, int n, int m)
{
    if (n == 0 || m == 0)
    {
        return 0;
    }
    else if (s[n - 1] == p[m - 1])
    {
        return 1 + recursiveLCS(s, p, n - 1, m - 1);
    }
    else
    {
        return max(recursiveLCS(s, p, n, m - 1), recursiveLCS(s, p, n - 1, m));
    }
}

//Top-Down LCS
int topdownLCS(string s, string p, int n, int m, vector<vector<int>> &dp)
{
    if (n == 0 || m == 0)
    {
        return 0;
    }
    else if (dp[n][m] != -1)
    {
        return dp[n][m];
    }
    else if (s[n - 1] == p[m - 1])
    {
        return dp[n][m] = 1 + topdownLCS(s, p, n - 1, m - 1, dp);
    }
    else
    {
        return dp[n][m] = max(topdownLCS(s, p, n, m - 1, dp), topdownLCS(s, p, n - 1, m, dp));
    }
}

//Bottom-UP LCS
int bottomupLCS(string s, string p)
{
    int n = s.size();
    int m = p.size();
    vector<vector<int>> dp(n + 1, vector<int>(m + 1));
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= m; j++)
        {
            if (i == 0 || j == 0)
            {
                dp[i][j] = 0;
            }
            else if (s[i - 1] == p[j - 1])
            {
                dp[i][j] = 1 + dp[i - 1][j - 1];
            }
            else
            {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }
    return dp[n][m];
}

int main()
{
    string s, p;
    s = "AGGTAB";
    p = "GXTXAYB";
    int n = s.size();
    int m = p.size();

    //Recursive LCS call
    cout << recursiveLCS(s, p, n, m) << "\n";

    vector<vector<int>> dp(n + 1, vector<int>(m + 1, -1));
    //Top-Down LCS call
    cout << topdownLCS(s, p, n, m, dp) << "\n";

    //Bottom-Up LCS call
    cout << bottomupLCS(s, p) << "\n";
}