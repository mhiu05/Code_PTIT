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
        int n, V;
        cin >> n >> V;
        int w[n + 1], v[n + 1];
        for (int i = 1; i <= n; ++i)
        {
            cin >> w[i];
        }
        for (int i = 1; i <= n; ++i)
        {
            cin >> v[i];
        }
        int dp[n + 1][V + 1];
        for (int i = 0; i <= n; ++i)
        {
            for (int j = 0; j <= V; ++j)
            {
                if (i == 0 || j == 0)
                {
                    dp[i][j] = 0;
                }
                else
                {
                    dp[i][j] = dp[i - 1][j];
                    if (j >= w[i])
                    {
                        dp[i][j] = max({dp[i][j], dp[i - 1][j - w[i]] + v[i]});
                    }
                }
            }
        }
        cout << dp[n][V] << endl;
    }
    return 0;
}