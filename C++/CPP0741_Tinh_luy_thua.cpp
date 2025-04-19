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

ll binpow(ll x, ll y, ll k)
{
    if (y == 0)
        return 1;
    ll X = binpow(x, y / 2, k);
    X = (X * X) % k;
    if (y % 2 != 0)
        X = (X * x) % k;
    return X;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        ll x, y, k;
        cin >> x >> y >> k;
        cout << binpow(x, y, k) % k << endl;
    }
    return 0;
}