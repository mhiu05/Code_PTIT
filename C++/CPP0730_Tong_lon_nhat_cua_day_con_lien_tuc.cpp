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

bool check(ll a[], int n)
{
    for (int i = 0; i < n; ++i)
    {
        if (a[i] > 0)
            return false;
    }
    return true;
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
        if (check(a, n))
        {
            cout << *max_element(a, a + n) << endl;
        }
        else
        {
            ll max_sum = LLONG_MIN;
            ll sum = 0;
            for (int i = 0; i < n; ++i)
            {
                sum += a[i];
                max_sum = max(max_sum, sum);
                if (sum < 0)
                    sum = 0;
            }
            cout << max_sum << endl;
        }
    }
    return 0;
}