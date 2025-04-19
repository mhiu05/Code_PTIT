#include <bits/stdc++.h>
#define fi first
#define se second
#define ms(a, n) memset(a, n, sizeof(a))
#define endl "\n"
#define PI 3.141592653589793238
using namespace std;

using ll = long long;

typedef pair<ll, ll> pl;
typedef vector<pl> vll;
typedef pair<int, int> pi;
typedef vector<pi> vii;

const int modi = 1000000007;
const ll modl = 1e18 + 7;

ll solve(string s, ll m)
{
    ll kq = 0;
    for (int i = 0; i < s.size(); ++i)
    {
        kq = 10 * kq + (s[i] - '0');
        kq %= m;
    }
    return kq;
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
        string s;
        cin >> s;
        ll m;
        cin >> m;
        cout << solve(s, m) << endl;
    }
    return 0;
}