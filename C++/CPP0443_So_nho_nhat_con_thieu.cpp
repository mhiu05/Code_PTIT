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

int solve(int a[], int n)
{
    if (a[0] > 1)
        return 1;
    if (a[1] > 2)
        return 2;
    for (int i = 1; i < n - 1; ++i)
    {
        if (a[i] != a[i - 1] + 1)
            return a[i - 1] + 1;
    }
    return a[n - 2] + 1;
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
        int a[n];
        for (int i = 0; i < n - 1; ++i)
        {
            cin >> a[i];
        }
        sort(a, a + n - 1);
        cout << solve(a, n) << endl;
    }
    return 0;
}