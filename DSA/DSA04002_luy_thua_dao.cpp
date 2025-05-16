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

ll convert(ll n)
{
    ll res = 0;
    while (n)
    {
        res = 10 * res + n % 10;
        n /= 10;
    }
    return res;
}

ll binpow(ll x, ll n)
{
    if (n == 0)
        return 1;
    ll X = binpow(x, n / 2);
    if (n % 2 == 0)
        return X % mod * X % mod % mod;
    return (X % mod * X % mod) % mod * x % mod % mod;
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
        cout << binpow(n, convert(n)) << endl;
    }
    return 0;
}