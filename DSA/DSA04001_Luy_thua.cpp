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

ll binpow(ll n, ll k)
{
    if (k == 0)
        return 1;
    ll x = binpow(n, k / 2);
    x = (x * x) % mod;
    if (k % 2 == 1)
        return (x * (n % mod)) % mod;
    return x;
}

int main()
{
    faster();
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        cout << binpow(n, k) << endl;
    }
    return 0;
}