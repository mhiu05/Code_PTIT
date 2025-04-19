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

int solve(int a[], int b[], int n)
{
    int Max = 0;
    for (int i = 0; i < n; ++i)
    {
        ll sum1 = 0, sum2 = 0;
        for (int j = i; j < n; ++j)
        {
            sum1 += a[j];
            sum2 += b[j];
            if (sum1 == sum2)
            {
                Max = max(Max, j - i + 1);
            }
        }
    }
    return Max;
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
        int a[n], b[n];
        for (int &x : a)
            cin >> x;
        for (int &x : b)
            cin >> x;
        cout << solve(a, b, n) << endl;
    }
    return 0;
}
