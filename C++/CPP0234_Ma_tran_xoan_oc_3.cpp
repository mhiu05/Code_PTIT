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
        int n, m, k;
        cin >> n >> m >> k;
        int a[n][m];
        int cnt = 0;
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < m; ++j)
            {
                cin >> a[i][j];
            }
        }
        int h1 = 0, h2 = n - 1, c1 = 0, c2 = m - 1;
        int check = 0;
        while (h1 <= h2 && c1 <= c2)
        {
            if (c1 > c2)
                break;
            for (int i = c1; i <= c2; ++i)
            {
                ++cnt;
                if (cnt == k)
                {
                    cout << a[h1][i];
                    check = 1;
                    break;
                }
            }
            ++h1;
            if (check)
                break;

            if (h1 > h2)
                break;
            for (int i = h1; i <= h2; ++i)
            {
                ++cnt;
                if (cnt == k)
                {
                    cout << a[i][c2];
                    check = 1;
                    break;
                }
            }
            --c2;
            if (check)
                break;

            if (c1 > c2)
                break;
            for (int i = c2; i >= c1; --i)
            {
                ++cnt;
                if (cnt == k)
                {
                    cout << a[h2][i];
                    check = 1;
                    break;
                }
            }
            --h2;
            if (check)
                break;

            if (h1 > h2)
                break;
            for (int i = h2; i >= h1; --i)
            {
                ++cnt;
                if (cnt == k)
                {
                    cout << a[i][c1];
                    check = 1;
                    break;
                }
            }
            ++c1;
            if (check)
                break;
        }
        cout << endl;
    }
    return 0;
}