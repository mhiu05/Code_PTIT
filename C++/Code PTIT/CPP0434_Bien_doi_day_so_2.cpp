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

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        ll a[n];
        for (ll &x : a)
        {
            cin >> x;
        }
        ll b[n];
        b[0] = a[0] * a[1];
        b[n - 1] = a[n - 1] * a[n - 2];
        for (int i = 1; i < n - 1; ++i)
        {
            b[i] = a[i - 1] * a[i + 1];
        }
        for (int x : b)
            cout << x << " ";
        cout << endl;
    }
    return 0;
}