#include <bits/stdc++.h>
using namespace std;

void faster()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

using ll = long long;

const int mod = 1e9 + 7;
const int MAXN = 1e5 + 5;

int main()
{
    faster();
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;

        vector<vector<int>> a(n, vector<int>(m));

        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < m; ++j)
            {
                cin >> a[i][j];
            }
        }

        vector<vector<int>> v(n, vector<int>(m));

        for (int j = 0; j < m; ++j)
        {
            v[0][j] = a[0][j];
        }
        for (int i = 1; i < n; ++i)
        {
            for (int j = 0; j < m; ++j)
            {
                if (a[i][j] != 0)
                {
                    v[i][j] = v[i - 1][j] + a[i][j];
                }
                else
                    v[i][j] = 0;
            }
        }

        int max_s = INT_MIN;

        for (int i = 0; i < n; ++i)
        {
            int cnt = 0, tmp = 1e9;
            for (int j = 0; j < m; ++j)
            {
                if (v[i][j] != 0)
                {
                    ++cnt;
                    tmp = min(tmp, v[i][j]);
                    max_s = max(max_s, tmp * cnt);
                }
                else
                {
                    cnt = 0;
                    tmp = 1e9;
                }
            }
        }
        if (max_s != INT_MAX)
            cout << max_s << endl;
        else
            cout << 0 << endl;
    }

    return 0;
}