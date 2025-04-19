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

ll PowMod(ll a, ll b, ll p)
{
    ll kq = 1;
    for (int i = 1; i <= b; ++i)
    {
        kq *= a;
        kq %= modi;
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
        int n;
        cin >> n;
        int a[n];
        for (int &x : a)
            cin >> x;
        sort(a, a + n);
        int kq[n];
        int x = 0;
        for (int i = 0; i < n; ++i)
        {
            if (i % 2 == 0)
                kq[i] = a[x++];
        }
        for (int i = 0; i < n; ++i)
        {
            if (i % 2 != 0)
                kq[i] = a[x++];
        }
        for (int it : kq)
            cout << it << " ";
        cout << endl;
    }
    return 0;
}