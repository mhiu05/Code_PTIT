#include <bits/stdc++.h>
#define fi first
#define sc second
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

ll gt(ll a)
{
    ll ans = 1;
    for (int i = 1; i <= a; ++i)
    {
        ans *= i;
    }
    return ans;
}

ll solve(ll n, ll r, ll b, ll g)
{
    ll ans = 0;
    ll max_r = r + n - (r + b + g);
    ll max_b = b + n - (r + b + g);
    ll max_g = g + n - (r + b + g);

    for (ll i = r; i <= max_r; ++i)
    {
        for (ll j = b; j <= max_b; ++j)
        {
            for (ll k = g; k <= max_g; ++k)
            {
                if (i + j + k == n)
                {
                    ans += gt(n) / (gt(i) * gt(j) * gt(k));
                }
            }
        }
    }
    return ans;
}

int main()
{
    faster();
    int t;
    cin >> t;
    while (t--)
    {
        ll n, r, b, g;
        cin >> n >> r >> b >> g;
        cout << solve(n, r, b, g) << endl;
    }
    return 0;
}