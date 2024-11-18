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

int main()
{
    faster();
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int a[n];
        for (int &x : a)
            cin >> x;
        sort(a, a + n);
        ll cnt = 0;
        for (int i = 0; i < n; ++i)
        {
            auto it = lower_bound(a + i + 1, a + n, a[i] + k);
            int tmp = it - (a + i + 1);
            cnt += 1ll * tmp;
        }
        cout << cnt << endl;
    }
    return 0;
}