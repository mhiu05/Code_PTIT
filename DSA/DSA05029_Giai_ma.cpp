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
        string s;
        cin >> s;
        if (s[0] == '0')
        {
            cout << 0 << endl;
            continue;
        }
        int n = s.size();
        s = " " + s;
        int dp[n + 1] = {0};
        dp[0] = 1;
        dp[1] = 1;
        for (int i = 2; i <= n; ++i)
        {
            if (s[i] != '0')
            {
                dp[i] += dp[i - 1];
            }
            if (s[i - 1] == '1' || (s[i - 1] == '2' && s[i] <= '6'))
            {
                dp[i] += dp[i - 2];
            }
        }
        cout << dp[n] << endl;
    }
    return 0;
}