#include <bits/stdc++.h>
#define fi first
#define se second
#define ms(a, n) memset(a, n, sizeof(a))
#define endl "\n"
using namespace std;

using ll = long long;

typedef pair<ll, ll> pl;
typedef vector<pl> vll;
typedef pair<int, int> pi;
typedef vector<pi> vii;

const int modi = 1000000007;
const ll modl = 1e18 + 7;

ll ans[10];
ll x = 0;

int isPrime(ll n)
{
    for (ll i = 2; i <= sqrt(n); ++i)
    {
        if (n % i == 0)
            return 0;
    }
    return n > 1;
}

void solve()
{
    for (ll i = 2; i <= 32; ++i)
    {
        if (isPrime(i))
        {
            ll tmp = 1ll * pow(2, i) - 1;
            if (isPrime(tmp))
            {
                ans[x++] = 1ll * tmp * (long long)pow(2, i - 1);
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    solve();
    while (t--)
    {
        ll n;
        cin >> n;
        int ok = 0;
        for (ll i = 0; i < x; ++i)
        {
            if (ans[i] == n)
            {
                ok = 1;
            }
        }
        if (ok)
            cout << 1 << endl;
        else
            cout << 0 << endl;
    }
    return 0;
}