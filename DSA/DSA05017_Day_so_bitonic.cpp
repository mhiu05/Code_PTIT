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
        vector<int> v(n + 1);
        for (int i = 1; i <= n; ++i)
            cin >> v[i];
        int dp1[n + 1], dp2[n + 2];
        for (int i = 1; i <= n; ++i)
        {
            dp1[i] = v[i];
            for (int j = 1; j < i; ++j)
            {
                if (v[i] > v[j])
                {
                    dp1[i] = max(dp1[i], dp1[j] + v[i]);
                }
            }
        }
        for (int i = n; i >= 1; --i)
        {
            dp2[i] = v[i];
            for (int j = n; j > i; --j)
            {
                if (v[i] > v[j])
                {
                    dp2[i] = max(dp2[i], dp2[j] + v[i]);
                }
            }
        }
        int max_ans = 0;
        for (int i = 1; i <= n; ++i)
        {
            max_ans = max(max_ans, dp1[i] + dp2[i] - v[i]);
        }
        cout << max_ans << endl;
    }
    return 0;
}