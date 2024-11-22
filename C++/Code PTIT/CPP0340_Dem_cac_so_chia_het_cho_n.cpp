#include <bits/stdc++.h>
using namespace std;

using ll = long long;

ll count_divisible_subseq(string str, int n)
{
    int len = str.length();
    ll dp[n];
    memset(dp, 0, sizeof(dp));
    dp[(str[0] - '0') % n]++;

    for (int i = 1; i < len; i++)
    {
        ll temp[n];
        memset(temp, 0, sizeof(temp));

        temp[(str[i] - '0') % n]++;

        for (int j = 0; j < n; j++)
        {
            temp[j] += dp[j];

            temp[(j * 10 + (str[i] - '0')) % n] += dp[j];
        }

        for (int j = 0; j < n; j++)
        {
            dp[j] = temp[j];
        }
    }
    return dp[0];
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, n;
        cin >> x >> n;
        string str;
        cin >> str;
        cout << count_divisible_subseq(str, n) << endl;
    }
    return 0;
}