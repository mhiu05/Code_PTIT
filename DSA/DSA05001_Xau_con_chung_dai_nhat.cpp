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

int solve(string s1, string s2)
{
    int n = s1.size(), m = s2.size();
    s1 = " " + s1;
    s2 = " " + s2;
    int F[n + 1][m + 1];
    for (int i = 0; i <= n; ++i)
    {
        F[i][0] = 0;
    }
    for (int j = 0; j <= m; ++j)
    {
        F[0][j] = 0;
    }
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= m; ++j)
        {
            if (s1[i] == s2[j])
            {
                F[i][j] = F[i - 1][j - 1] + 1;
            }
            else
            {
                F[i][j] = max(F[i][j - 1], F[i - 1][j]);
            }
        }
    }
    return F[n][m];
}

int main()
{
    faster();
    int t;
    cin >> t;
    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;
        cout << solve(s1, s2) << endl;
    }
    return 0;
}