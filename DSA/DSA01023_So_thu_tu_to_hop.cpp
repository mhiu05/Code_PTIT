#include <bits/stdc++.h>
#define endl "\n"
#define second sc
#define first fi

using namespace std;

using ll = long long;

const int mod = 1e9 + 7;
const int MAXN = 1e6 + 1;

void faster()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

int X[1001], n, k, ok, a[1001];

void init()
{
    cin >> n >> k;
    for (int i = 1; i <= k; ++i)
    {
        X[i] = i;
    }
    for (int i = 1; i <= k; ++i)
    {
        cin >> a[i];
    }
    ok = 1;
}

int check()
{
    for (int i = 1; i <= k; ++i)
    {
        if (a[i] != X[i])
            return 0;
    }
    return 1;
}

void sinh()
{
    int i = k;
    while (i > 0 && X[i] == n - k + i)
    {
        --i;
    }
    if (i == 0)
        ok = 0;
    else
    {
        X[i]++;
        for (int j = i + 1; j <= k; ++j)
        {
            X[j] = X[j - 1] + 1;
        }
    }
}

int main()
{
    faster();
    int t;
    cin >> t;
    while (t--)
    {
        init();
        int cnt = 0;
        while (ok)
        {
            ++cnt;
            if (check())
                ok = 0;
            sinh();
        }
        cout << cnt << endl;
    }
    return 0;
}