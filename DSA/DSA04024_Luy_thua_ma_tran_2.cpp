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

ll n, k;

struct matrix
{
    ll a[11][11];
    friend matrix operator*(matrix x1, matrix x2)
    {
        matrix x;
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                x.a[i][j] = 0;
                for (int m = 0; m < n; ++m)
                {
                    x.a[i][j] += x1.a[i][m] * x2.a[m][j];
                    x.a[i][j] %= mod;
                }
            }
        }
        return x;
    }
};

matrix binpow(matrix x, ll k)
{
    if (k == 1)
        return x;
    matrix X = binpow(x, k / 2);
    if (k % 2 == 0)
        return X * X;
    else
        return X * X * x;
}

int main()
{
    faster();
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        matrix x;
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                int tmp;
                cin >> tmp;
                x.a[i][j] = tmp;
            }
        }
        matrix ans = binpow(x, k);
        ll sum = 0;
        for (int i = 0; i < n; ++i)
        {
            sum += ans.a[i][n - 1];
            sum %= mod;
        }
        cout << sum << endl;
    }
    return 0;
}