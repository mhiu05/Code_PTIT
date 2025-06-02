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
        vector<double> v1, v2;
        v1.push_back(-1.0);
        v2.push_back(-1.0);
        for (int i = 0; i < n; ++i)
        {
            double x, y;
            cin >> x >> y;
            v1.push_back(x);
            v2.push_back(y);
        }
        int dp[n + 5];
        dp[1] = 1;
        for (int i = 2; i <= n; ++i)
        {
            dp[i] = 1;
            for (int j = 1; j < i; ++j)
            {
                if (v1[i] > v1[j] && v2[i] < v2[j])
                {
                    dp[i] = max(dp[i], dp[j] + 1);
                }
            }
        }
        cout << *max_element(dp + 1, dp + n + 1) << endl;
    }
    return 0;
}