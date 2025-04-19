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
const int MAXN = 1e5 + 5;

int main()
{
    faster();
    int n, k, b;
    cin >> n >> k >> b;
    int a[MAXN] = {0};
    for (int i = 1; i <= b; ++i)
    {
        int x;
        cin >> x;
        a[x] = 1;
    }
    int ans = 0, cnt = 0;
    for (int i = 1; i <= k; ++i)
    {
        if (a[i])
            ++cnt;
    }
    ans = cnt;
    for (int i = k + 1; i <= n; ++i)
    {
        if (a[i])
            ++cnt;
        if (a[i - k])
            --cnt;
        ans = min(ans, cnt);
    }
    cout << ans;
    return 0;
}