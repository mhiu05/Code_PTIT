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
        ll n;
        cin >> n;
        ll a[n];
        ll h = 1;
        for (ll &x : a)
        {
            cin >> x;
            h *= x;
            h %= mod;
        }
        ll g = a[0];
        for (int i = 1; i < n; ++i)
        {
            g = __gcd(a[i], g);
        }
        ll ans = 1;
        for (int i = 1; i <= g; ++i)
        {
            ans *= h;
            ans %= mod;
        }
        cout << ans << endl;
    }
    return 0;
}