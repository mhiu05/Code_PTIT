#include <bits/stdc++.h>
#define fi first
#define sc second
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
        ll x[n][m], h[3][3];
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < m; ++j)
            {
                cin >> x[i][j];
            }
        }
        for (int i = 0; i < 3; ++i)
        {
            for (int j = 0; j < 3; ++j)
            {
                cin >> h[i][j];
            }
        }
        ll ans = 0;
        // ll res[n - 2][m - 2];
        for (int i = 0; i < n - 2; ++i)
        {
            for (int j = 0; j < m - 2; ++j)
            {
                ll tmp_sum = 0;
                for (int k = 0; k < 3; ++k)
                {
                    for (int m = 0; m < 3; ++m)
                    {
                        tmp_sum += x[i + k][j + m] * h[k][m];
                    }
                }
                ans += tmp_sum;
            }
        }
        cout << ans << endl;
    }
    return 0;
}