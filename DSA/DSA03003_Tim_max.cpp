#include <bits/stdc++.h>
#define endl "\n"

using namespace std;

void faster()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

using ll = long long;

const int mod = 1e9 + 7;
const int MAXN = 100005;

int main()
{
    faster();
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        ll a[n];
        for (ll &x : a)
            cin >> x;
        ll ans = 0;
        sort(a, a + n);
        for (int i = 0; i < n; ++i)
        {
            ans += a[i] * i;
            ans %= mod;
        }
        cout << ans << endl;
    }
    return 0;
}