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

int check(int a[], int l, int r, int n)
{
    int i = l, j = r;
    while (a[i] <= a[i + 1] && j >= l && i <= r)
    {
        ++i;
    }
    while (a[j] <= a[j - 1] && j >= l && i <= r)
    {
        --j;
    }
    if (i == j || j + 1 == i)
        return 1;
    return 0;
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
        int l, r;
        cin >> l >> r;
        if (check(a, l, r, n))
            cout << "Yes\n";
        else
            cout << "No\n";
    }
    return 0;
}
