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
        ll n, k;
        cin >> n >> k;
        ll a[n];
        for (ll &x : a)
            cin >> x;
        sort(a, a + n);
        ll ans = 0;
        ll j = 0;
        for (ll i = 0; i < n; ++i)
        {
            while (j < n && a[j] - a[i] < k)
                ++j;
            ans += j - i - 1;
        }
        cout << ans << endl;
    }
    return 0;
}