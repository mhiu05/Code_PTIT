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

void solve(set<ll> &se, ll k)
{
    while (k)
    {
        se.insert(k % 10);
        k /= 10;
    }
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
        int n, m;
        cin >> n >> m;
        ll a[n], b[m];
        for (ll &x : a)
            cin >> x;
        for (ll &x : b)
            cin >> x;
        sort(a, a + n, greater<ll>());
        sort(b, b + n);
        cout << a[0] * b[0] << endl;
    }
    return 0;
}
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

void solve(set<ll> &se, ll k)
{
    while (k)
    {
        se.insert(k % 10);
        k /= 10;
    }
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
        int n, m;
        cin >> n >> m;
        ll a[n], b[m];
        for (ll &x : a)
            cin >> x;
        for (ll &x : b)
            cin >> x;
        sort(a, a + n, greater<ll>());
        sort(b, b + n);
        cout << a[0] * b[0] << endl;
    }
    return 0;
}