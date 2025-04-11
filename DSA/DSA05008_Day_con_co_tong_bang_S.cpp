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
        int n, s;
        cin >> n >> s;
        vector<int> v(n);
        for (int &x : v)
            cin >> x;
        int dp[s + 1] = {0};
        dp[0] = 1;
        for (int i = 0; i < n; ++i)
        {
            for (int j = s; j >= v[i]; --j)
            {
                if (dp[j - v[i]] == 1)
                    dp[j] = 1;
            }
        }
        if (dp[s] == 1)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}