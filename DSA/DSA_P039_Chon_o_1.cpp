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

int count_bit_1(int k)
{
    int cnt = 0;
    for (int i = 0; i <= 31; ++i)
    {
        if (k & (1 << i))
            ++cnt;
    }
    return cnt;
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
        int a[n][n];
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                cin >> a[i][j];
            }
        }
        vector<int> dp(1 << n, -1);
        dp[0] = 0;
        for (int mask = 0; mask < (1 << n); ++mask)
        {
            int row = count_bit_1(mask);
            for (int col = 0; col < n; ++col)
            {
                if (!(mask & (1 << col)))
                {
                    int newMask = mask | (1 << col);
                    dp[newMask] = max(dp[newMask], dp[mask] + a[row][col]);
                }
            }
        }
        cout << dp[(1 << n) - 1] << endl;
    }
    return 0;
}