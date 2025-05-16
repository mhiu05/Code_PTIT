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
        int n;
        cin >> n;
        ll dp[n + 1];
        dp[1] = 1;
        int i2 = 1, i3 = 1, i5 = 1;
        for (int i = 2; i <= n; ++i)
        {
            ll next2 = dp[i2] * 2;
            ll next3 = dp[i3] * 3;
            ll next5 = dp[i5] * 5;
            dp[i] = min({next2, next3, next5});
            if (dp[i] == next2)
                ++i2;
            if (dp[i] == next3)
                ++i3;
            if (dp[i] == next5)
                ++i5;
        }
        cout << dp[n] << endl;
    }
    return 0;
}