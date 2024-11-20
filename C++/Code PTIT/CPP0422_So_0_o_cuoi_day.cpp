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

int Count(string s)
{
    int cnt = 0;
    for (int i = 0; i < s.size() - 1; ++i)
    {
        for (int j = i + 1; j < s.size(); ++j)
        {
            if (s[i] == s[j])
                ++cnt;
        }
    }
    return cnt;
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
        int n;
        cin >> n;
        ll a[n];
        for (ll &x : a)
            cin >> x;
        int cnt = 0;
        for (ll x : a)
        {
            if (x != 0)
                cout << x << " ";
            else
                ++cnt;
        }
        for (int i = 1; i <= cnt; ++i)
        {
            cout << 0 << " ";
        }
        cout << endl;
    }
    return 0;
}