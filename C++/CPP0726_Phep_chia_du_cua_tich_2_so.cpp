#include <bits/stdc++.h>
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

ll solve(ll a, ll b, ll c)
{
    if (b == 0 || a == 0)
        return 0;
    ll x = solve(a, b / 2, c);
    if (b % 2 == 0)
        return (2 * (x % c)) % c;
    else
        return (a % c + 2 * (x % c)) % c;
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
        ll a, b, c;
        cin >> a >> b >> c;
        cout << solve(a, b, c) << endl;
    }
    return 0;
}
