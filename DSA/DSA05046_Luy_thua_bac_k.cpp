#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int MOD = 1e9 + 7;

ll power(ll a, ll b)
{
    ll res = 1;
    a %= MOD;
    while (b)
    {
        if (b & 1)
            res = res * a % MOD;
        a = a * a % MOD;
        b >>= 1;
    }
    return res;
}

ll modinv(ll a)
{
    return power(a, MOD - 2);
}

ll lagrange_sum(ll n, int k)
{
    if (n <= k + 1)
    {
        ll res = 0;
        for (ll i = 1; i <= n; ++i)
            res = (res + power(i, k)) % MOD;
        return res;
    }

    vector<ll> y(k + 2);
    y[0] = 0;
    for (int i = 1; i <= k + 1; ++i)
        y[i] = (y[i - 1] + power(i, k)) % MOD;

    vector<ll> fact(k + 3), invfact(k + 3);
    fact[0] = 1;
    for (int i = 1; i <= k + 2; ++i)
        fact[i] = fact[i - 1] * i % MOD;
    invfact[k + 2] = modinv(fact[k + 2]);
    for (int i = k + 1; i >= 0; --i)
        invfact[i] = invfact[i + 1] * (i + 1) % MOD;

    ll res = 0;
    for (int i = 0; i <= k + 1; ++i)
    {
        ll num = 1, denom = 1;
        for (int j = 0; j <= k + 1; ++j)
        {
            if (i != j)
            {
                num = num * ((n - j + MOD) % MOD) % MOD;
                denom = denom * ((i - j + MOD) % MOD) % MOD;
            }
        }
        ll term = y[i] * num % MOD * modinv(denom) % MOD;
        res = (res + term) % MOD;
    }
    return res;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        ll n;
        int k;
        cin >> n >> k;
        cout << lagrange_sum(n, k) << "\n";
    }
    return 0;
}
