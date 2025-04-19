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
    int i = 0;
    while (a[i] <= 0)
    {
        ++i;
    }
    if (i == n)
        return 1;
    if (a[i] > 1)
        return 1;
    if (a[n - 1] == 1 && i == n - 1)
        return 2;
    for (int j = i + 1; j < n; ++j)
    {
        if (a[j] == a[j - 1])
            continue;
        if (a[j] != a[j - 1] + 1)
            return a[j - 1] + 1;
    }
    return a[n - 1] + 1;
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
        for (int &x : a)
            cin >> x;
        sort(a, a + n);
        cout << solve(a, n) << endl;
    }
    return 0;
}