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
        int n, m;
        cin >> n >> m;
        int a[n + 1][m + 1];
        for (int i = 1; i <= n; ++i)
        {
            for (int j = 1; j <= m; ++j)
            {
                cin >> a[i][j];
            }
        }
        int max_size = 0;
        int dp[n + 5][m + 5];
        for (int i = 0; i <= n; ++i)
        {
            dp[i][0] = 0;
        }
        for (int i = 0; i <= m; ++i)
        {
            dp[0][i] = 0;
        }
        for (int i = 1; i <= n; ++i)
        {
            for (int j = 1; j <= m; ++j)
            {
                if (a[i][j])
                {
                    dp[i][j] = min({dp[i - 1][j], dp[i][j - 1], dp[i - 1][j - 1]}) + 1;
                    max_size = max(max_size, dp[i][j]);
                }
                else
                    dp[i][j] = 0;
            }
        }
        cout << max_size << endl;
    }
    return 0;
}