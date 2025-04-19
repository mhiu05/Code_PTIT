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
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }
        int left[1000], right[1000];
        for (int i = 0; i < n; ++i)
        {
            left[i] = 1;
            for (int j = 0; j < i; ++j)
            {
                if (a[i] > a[j])
                {
                    left[i] = max(left[i], left[j] + 1);
                }
            }
        }
        for (int i = n - 1; i >= 0; --i)
        {
            right[i] = 1;
            for (int j = n - 1; j > i; --j)
            {
                if (a[i] > a[j])
                {
                    right[i] = max(right[i], right[j] + 1);
                }
            }
        }
        int ans = 0;
        for (int i = 0; i < n; ++i)
        {
            ans = max(ans, left[i] + right[i] - 1);
        }
        cout << ans << endl;
    }
    return 0;
}