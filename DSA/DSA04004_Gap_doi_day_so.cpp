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

int solve(int n, ll k)
{
    ll mid = 1ll << (n - 1);
    if (k < mid)
    {
        return solve(n - 1, k);
    }
    else if (k > mid)
    {
        return solve(n - 1, k - mid);
    }
    else
    {
        return n;
    }
}

int main()
{
    faster();
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        cout << solve(n, k) << endl;
    }
    return 0;
}