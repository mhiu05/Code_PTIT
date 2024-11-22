#include <bits/stdc++.h>
using namespace std;

void faster()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

using ll = long long;

const int mod = 1e9 + 7;
const int MAXN = 1e5 + 5;

int main()
{
    faster();
    int t;
    cin >> t;
    while (t--)
    {
        ll n, x;
        cin >> n >> x;
        ll a[n + 5];
        ll sum = 0;
        for (ll i = 1; i <= n; ++i)
        {
            cin >> a[i];
            sum += a[i];
        }
        if (sum < x)
        {
            cout << -1 << endl;
        }
        else
        {
            ll F[n + 1] = {0};
            for (ll i = 1; i <= n; ++i)
            {
                F[i] = F[i - 1] + a[i];
            }
            int min_len = INT_MAX;
            int l = 1, r = 1;
            while (r <= n && l <= n)
            {
                if (F[r] - F[l - 1] > x)
                {
                    min_len = min(r - l + 1, min_len);
                    ++l;
                }
                else
                    ++r;
            }
            cout << min_len << endl;
        }
    }
    return 0;
}