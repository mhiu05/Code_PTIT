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

struct matrix
{
    ll a[2][2];
    friend matrix operator*(matrix x1, matrix x2)
    {
        matrix x;
        for (int i = 0; i < 2; ++i)
        {
            for (int j = 0; j < 2; ++j)
            {
                x.a[i][j] = 0;
                for (int k = 0; k < 2; ++k)
                {
                    x.a[i][j] += x1.a[i][k] * x2.a[k][j];
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
        ll n;
        cin >> n;
        matrix x;
        x.a[0][0] = 1;
        x.a[1][0] = 1;
        x.a[0][1] = 1;
        x.a[1][1] = 0;
        matrix ans = binpow(x, n);
        cout << ans.a[1][0] << endl;
    }

    return 0;
}