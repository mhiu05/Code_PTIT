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

ll C[501][501];
void sieve()
{
    for (int i = 0; i <= 109; ++i)
    {
        for (int j = 0; j <= i; ++j)
        {
            if (i == j || j == 0)
            {
                C[i][j] = 1;
            }
            else
            {
                C[i][j] = 1ll * (C[i - 1][j - 1] + C[i - 1][j]);
                C[i][j] %= mod;
            }
        }
    }
}

int main()
{
    faster();
    sieve();
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << C[n + 9][n] << endl;
    }
    return 0;
}