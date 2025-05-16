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

int main()
{
    faster();
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int dp[n + 5] = {0};
        dp[0] = 1;
        dp[1] = 1;
        for (int i = 2; i <= n; ++i)
        {
            for (int j = 1; j <= k; ++j)
            {
                if (i - j >= 0)
                {
                    dp[i] += dp[i - j];
                    dp[i] %= mod;
                }
            }
        }
        cout << dp[n] << endl;
    }
    return 0;
}