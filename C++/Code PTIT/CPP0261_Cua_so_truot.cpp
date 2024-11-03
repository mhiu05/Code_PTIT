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

int main()
{
    faster();
    int n;
    cin >> n;
    int a[n + 5][n + 5];
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cin >> a[i][j];
        }
    }
    int m;
    cin >> m;
    int b[m + 5][m + 5];
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            cin >> b[i][j];
        }
    }
    for (int i = 0; i < n; i += m)
    {
        for (int j = 0; j < n; j += m)
        {
            for (int p = 0; p < m; ++p)
            {
                for (int q = 0; q < m; ++q)
                {
                    a[i + p][j + q] *= b[p][q];
                }
            }
        }
    }
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}