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

int max_val_matrix(vector<vector<int>> &v, int n)
{
    vector<vector<int>> main_diagonal(n + 1, vector<int>(n + 2, 0));
    vector<vector<int>> secondary_diagonal(n + 1, vector<int>(n + 2, 0));

    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= n; ++j)
        {

            main_diagonal[i][j] = v[i][j];
            secondary_diagonal[i][j] = v[i][j];

            if (i > 1 && j > 1)
                main_diagonal[i][j] += main_diagonal[i - 1][j - 1];
            if (i > 1 && j < n)
                secondary_diagonal[i][j] += secondary_diagonal[i - 1][j + 1];
        }
    }

    int max_val = -1e9;
    for (int r1 = 1; r1 <= n; ++r1)
    {
        for (int c1 = 1; c1 <= n; ++c1)
        {
            int size = 2;
            while (r1 + size - 1 <= n && c1 + size - 1 <= n)
            {
                int r2 = r1 + size - 1;
                int c2 = c1 + size - 1;

                int sum_main = main_diagonal[r2][c2];
                if (r1 - 1 >= 1 && c1 - 1 >= 1)
                    sum_main -= main_diagonal[r1 - 1][c1 - 1];

                int sum_second = secondary_diagonal[r2][c1];
                if (r1 - 1 >= 1 && c2 + 1 <= n)
                    sum_second -= secondary_diagonal[r1 - 1][c2 + 1];

                int ans = sum_main - sum_second;
                max_val = max(max_val, ans);
                ++size;
            }
        }
    }

    return max_val;
}

int main()
{
    faster();
    int n;
    cin >> n;
    vector<vector<int>> v(n + 1, vector<int>(n + 1));
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= n; ++j)
        {
            cin >> v[i][j];
        }
    }
    cout << max_val_matrix(v, n);
    return 0;
}