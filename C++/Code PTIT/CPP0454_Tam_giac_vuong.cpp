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

int check(ll a[], int n)
{
    for (int i = n - 1; i >= 2; --i)
    {
        int x = 0, y = i - 1;
        while (x < y)
        {
            if (a[x] * a[x] + a[y] * a[y] == a[i] * a[i])
                return 1;
            else if (a[x] * a[x] + a[y] * a[y] < a[i] * a[i])
                ++x;
            else
                --y;
        }
    }
    return 0;
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
        sort(a, a + n);
        if (check(a, n))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}