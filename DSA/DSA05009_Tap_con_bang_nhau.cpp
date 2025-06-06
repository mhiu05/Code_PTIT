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

int arr[101];

int check(int a[], int n)
{
    int sum = 0;
    for (int i = 1; i <= n; ++i)
    {
        sum += a[i];
    }
    if (sum % 2 != 0)
        return 0;
    int x = sum / 2;
    int dp[x + 1] = {0};
    dp[0] = 1;
    for (int i = 1; i <= n; ++i)
    {
        for (int j = x; j >= a[i]; --j)
        {
            if (dp[j] == 0)
            {
                dp[j] = dp[j - a[i]];
            }
        }
    }
    return dp[x];
}

int main()
{
    faster();
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n + 1];
        for (int i = 1; i <= n; ++i)
            cin >> a[i];
        if (check(a, n))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}