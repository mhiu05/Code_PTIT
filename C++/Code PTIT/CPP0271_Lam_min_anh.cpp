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
        int n, m, L;
        cin >> n >> m >> L;

        vector<vector<int>> a(n + 1, vector<int>(m + 1, 0));
        vector<vector<int>> p(n + 1, vector<int>(m + 1, 0));

        for (int i = 1; i <= n; ++i)
        {
            for (int j = 1; j <= m; ++j)
            {
                cin >> a[i][j];
            }
        }

        for (int i = 1; i <= n; ++i)
        {
            for (int j = 1; j <= m; ++j)
            {
                p[i][j] = a[i][j] + p[i - 1][j] + p[i][j - 1] - p[i - 1][j - 1];
            }
        }

        for (int i = 1; i <= n - L + 1; ++i)
        {
            for (int j = 1; j <= m - L + 1; ++j)
            {
                int r2 = i + L - 1;
                int c2 = j + L - 1;
                int r1 = i;
                int c1 = j;
                int sum = p[r2][c2] - p[r1 - 1][c2] - p[r2][c1 - 1] + p[r1 - 1][c1 - 1];
                int ans = sum / (L * L);
                cout << ans << " ";
            }
            cout << endl;
        }
    }
    return 0;
}