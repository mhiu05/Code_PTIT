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
        int a[n][m];
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < m; ++j)
            {
                cin >> a[i][j];
            }
        }
        vector<int> v;
        int h1 = 0, h2 = n - 1, c1 = 0, c2 = m - 1;
        while (h1 <= h2 && c1 <= c2)
        {
            if (c1 > c2)
                break;
            for (int i = c1; i <= c2; ++i)
            {
                v.push_back(a[h1][i]);
            }
            ++h1;

            if (h1 > h2)
                break;
            for (int i = h1; i <= h2; ++i)
            {
                v.push_back(a[i][c2]);
            }
            --c2;

            if (c1 > c2)
                break;
            for (int i = c2; i >= c1; --i)
            {
                v.push_back(a[h2][i]);
            }
            --h2;

            if (h1 > h2)
                break;
            for (int i = h2; i >= h1; --i)
            {
                v.push_back(a[i][c1]);
            }
            ++c1;
        }
        reverse(v.begin(), v.end());
        for (int x : v)
            cout << x << " ";
        cout << endl;
    }
    return 0;
}