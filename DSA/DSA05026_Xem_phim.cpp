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
    int c, n;
    cin >> c >> n;
    vector<int> w(n);
    for (int &x : w)
        cin >> x;
    int dp[c + 5] = {0};
    dp[0] = 1;
    int max_weight = 0;
    for (int i = 0; i < n; ++i)
    {
        for (int j = c; j >= w[i]; --j)
        {
            if (dp[j - w[i]])
            {
                dp[j] = 1;
            }
        }
    }
    for (int i = c; i >= 0; --i)
    {
        if (dp[i] == 1)
        {
            cout << i;
            break;
        }
    }
    return 0;
}