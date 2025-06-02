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
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n + 5], b[n + 5];
        for (int i = 1; i <= n; ++i)
            cin >> a[i];
        for (int i = 1; i <= n; ++i)
            cin >> b[i];
        sort(a + 1, a + n + 1);
        sort(b + 1, b + n + 1, greater<int>());
        ll sum = 0;
        for (int i = 1; i <= n; ++i)
        {
            sum += 1ll * a[i] * b[i];
        }
        cout << sum << endl;
    }
    return 0;
}