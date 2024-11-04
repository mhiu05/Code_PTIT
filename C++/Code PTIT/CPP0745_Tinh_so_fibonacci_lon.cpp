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

ll F[1005];
void solve()
{
    F[1] = 0;
    F[2] = 1;
    for (int i = 3; i <= 1000; ++i)
    {
        F[i] = F[i - 1] + F[i - 2];
        F[i] %= modi;
    }
}
int main()
{
    solve();
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << F[n + 1] << endl;
    }
    return 0;
}