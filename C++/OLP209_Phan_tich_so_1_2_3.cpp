#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll N = 1e5;

vector<int> a;
void sinh(string s)
{
    if (s.size() != 0 && stoi(s) <= N)
    {
        a.push_back(stoi(s));
    }
    if (s.size() == 5)
        return;
    for (char x : {'1', '2', '3'})
    {
        sinh(s + x);
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    sinh("");

    int dp[N] = {0};
    for (int &x : a)
        dp[x] = 1;

    for (int j = 1; j <= N; j++)
    {
        for (int i = 0; i < a.size(); i++)
        {
            if (j - a[i] >= 0 && dp[j - a[i]])
            {
                if (!dp[j])
                    dp[j] = dp[j - a[i]] + 1;
                else
                    dp[j] = min(dp[j], dp[j - a[i]] + 1);
            }
        }
    }
    int te;
    cin >> te;
    while (te--)
    {
        int X;
        cin >> X;
        cout << dp[X] << endl;
    }
    return 0;
}