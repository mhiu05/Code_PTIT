#include <bits/stdc++.h>
#define endl "\n"

using namespace std;

void faster()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
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
        int x, y, z;
        cin >> x >> y >> z;
        vector<int> dp(n + 5, 1e9);
        dp[0] = 0;
        dp[1] = x;
        for (int i = 2; i <= n; ++i)
        {
            if (i % 2 == 0)
            {
                dp[i] = min(dp[i - 1] + x, dp[i / 2] + z);
            }
            else
                dp[i] = min({dp[i - 1] + x, dp[(i - 1) / 2] + x + z, dp[(i + 1) / 2] + y + z});
        }
        cout << dp[n] << endl;
    }
    return 0;
}
