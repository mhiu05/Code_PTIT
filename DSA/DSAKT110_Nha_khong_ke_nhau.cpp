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
        int a[n + 1];
        for (int i = 1; i <= n; ++i)
        {
            cin >> a[i];
        }
        int dp[n + 1] = {0};
        dp[0] = 0;
        dp[1] = a[1];
        dp[2] = max(a[1], a[2]);
        for (int i = 3; i <= n; ++i)
        {
            dp[i] = max(dp[i - 2] + a[i], dp[i - 1]);
        }
        cout << dp[n] << endl;
    }
    return 0;
}