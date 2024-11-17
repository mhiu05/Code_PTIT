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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        int a[10005];
        for (int i = 1; i <= n; ++i)
        {
            cin >> a[i];
        }
        int F[10005];
        F[0] = 0;
        for (int i = 1; i <= n; ++i)
        {
            F[i] = F[i - 1] + a[i];
        }
        while (q--)
        {
            int x, y;
            cin >> x >> y;
            cout << F[y] - F[x] + a[x] << endl;
        }
    }
    return 0;
}