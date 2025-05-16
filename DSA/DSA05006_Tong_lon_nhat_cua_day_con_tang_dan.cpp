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
        int dp[n + 1];
        for (int i = 1; i <= n; ++i)
        {
            dp[i] = v[i];
            for (int j = 1; j < i; ++j)
            {
                if (v[i] > v[j])
                {
                    dp[i] = max(dp[i], dp[j] + v[i]);
                }
            }
        }
        cout << *max_element(dp + 1, dp + n + 1) << endl;
    }
    return 0;
}