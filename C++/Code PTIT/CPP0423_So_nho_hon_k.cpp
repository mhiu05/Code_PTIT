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

int solve(int a[], int n, int k)
{
    int cnt1 = 0, cnt2 = 0;
    for (int i = 0; i < n; ++i)
    {
        if (a[i] <= k)
            ++cnt1;
    }
    for (int i = 0; i < cnt1; ++i)
    {
        if (a[i] > k)
            ++cnt2;
    }
    int kq = cnt2;
    int i = 0, j = cnt1;
    while (j < n)
    {
        if (a[i] > k)
            --cnt2;
        if (a[j] > k)
            ++cnt2;
        ++i;
        ++j;
        kq = min(kq, cnt2);
    }
    return kq;
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
        int n, k;
        cin >> n >> k;
        int a[n];
        for (int &x : a)
            cin >> x;
        cout << solve(a, n, k) << endl;
    }
    return 0;
}