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
        int n = s.size();
        s = " " + s;
        int dp[n + 1][n + 1] = {0};
        for (int i = 1; i <= n; ++i)
        {
            dp[i][i] = 1;
        }
        int max_ans = 1;
        for (int i = 1; i < n; ++i)
        {
            if (s[i] == s[i + 1])
            {
                dp[i][i + 1] = 1;
                max_ans = 2;
            }
        }
        for (int len = 3; len <= n; ++len)
        {
            for (int i = 1; i + len - 1 <= n; ++i)
            {
                int j = i + len - 1;
                if (s[i] == s[j] && dp[i + 1][j - 1] == 1)
                {
                    dp[i][j] = 1;
                    max_ans = max(max_ans, len);
                }
            }
        }
        cout << max_ans << endl;
    }
    return 0;
}