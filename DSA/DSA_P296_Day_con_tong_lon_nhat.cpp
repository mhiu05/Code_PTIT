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
    int n, q;
    cin >> n >> q;
    ll a[n];
    for (ll &x : a)
        cin >> x;

    ll F[100005] = {0};
    if (a[0] > 0)
        F[0] = a[0];
    for (int i = 1; i < n; ++i)
    {
        if (a[i] > 0)
        {
            F[i] = F[i - 1] + a[i];
        }
        else
            F[i] = F[i - 1];
    }

    while (q--)
    {
        int l, r;
        cin >> l >> r;
        --l;
        --r;
        if (l == 0)
            cout << F[r] << endl;
        else
        {
            cout << F[r] - F[l - 1] << endl;
        }
    }
    return 0;
}