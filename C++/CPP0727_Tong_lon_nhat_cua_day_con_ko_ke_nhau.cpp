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
        ll dp[n];
        if (n == 1)
            cout << a[0] << endl;
        else if (n == 2)
        {
            cout << max(a[0], a[1]);
        }
        else
        {
            dp[0] = a[0];
            dp[1] = a[1];
            dp[2] = a[0] + a[2];
            for (int i = 3; i < n; ++i)
            {
                dp[i] = a[i];
                dp[i] += max(dp[i - 2], dp[i - 3]);
            }
            cout << max(dp[n - 2], dp[n - 1]) << endl;
        }
    }
    return 0;
}