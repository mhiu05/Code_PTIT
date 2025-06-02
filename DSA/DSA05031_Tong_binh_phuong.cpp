#include <bits/stdc++.h>
#define endl "\n"

using namespace std;

void faster()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

using ll = long long;

const int mod = 1e9 + 7;
const int MAXN = 100005;

int solve(int n)
{
    int dp[n + 1];
    dp[0] = 0;
    for (int i = 1; i <= n; ++i)
    {
        dp[i] = i;
        for (int j = 1; j * j <= i; ++j)
        {
            dp[i] = min(dp[i], dp[i - j * j] + 1);
        }
    }
    return dp[n];
}

int main()
{
    faster();
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << solve(n) << endl;
    }
    return 0;
}