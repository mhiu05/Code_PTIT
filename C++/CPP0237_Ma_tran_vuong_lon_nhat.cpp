#include <bits/stdc++.h>
using namespace std;

void faster()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
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
        char a[n][n];
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < n; ++j)
                cin >> a[i][j];
        }

        int ans = 0;

        for (int k = 1; k <= n; ++k)
        {
            bool found = false;
            for (int i = 0; i <= n - k; ++i)
            {
                for (int j = 0; j <= n - k; ++j)
                {
                    bool valid = true;

                    for (int x = i; x < i + k; ++x)
                    {
                        if (a[x][j] == 'O' || a[x][j + k - 1] == 'O')
                        {
                            valid = false;
                            break;
                        }
                    }
                    for (int y = j; y < j + k; ++y)
                    {
                        if (a[i][y] == 'O' || a[i + k - 1][y] == 'O')
                        {
                            valid = false;
                            break;
                        }
                    }

                    if (valid)
                    {
                        ans = k;
                        found = true;
                        break;
                    }
                }
                if (found)
                    break;
            }
        }

        cout << ans << endl;
    }
    return 0;
}