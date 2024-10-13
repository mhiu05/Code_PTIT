#include <bits/stdc++.h>
#define fi first
#define sc second
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
    int n;
    cin >> n;
    int a[n][n];
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cin >> a[i][j];
        }
    }
    for (int x = 2; x <= n; ++x)
    {
        for (int i = x; i < n; ++i)
        {
            for (int j = x; j < n; ++j)
            {
            }
        }
    }
    return 0;
}