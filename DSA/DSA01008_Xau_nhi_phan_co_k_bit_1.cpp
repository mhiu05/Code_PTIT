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

int X[1001];
int n, ok, k;

void init()
{
    cin >> n >> k;
    ok = 1;
    for (int i = 1; i <= n; ++i)
    {
        X[i] = 0;
    }
}

void print()
{
    for (int i = 1; i <= n; ++i)
    {
        cout << X[i];
    }
    cout << endl;
}

int check()
{
    int cnt = 0;
    for (int i = 1; i <= n; ++i)
    {
        if (X[i] == 1)
            ++cnt;
    }
    if (cnt == k)
        return 1;
    return 0;
}

void sinh()
{
    int i = n;
    while (i > 0 && X[i] == 1)
    {
        X[i] = 0;
        --i;
    }
    if (i == 0)
        ok = 0;
    else
    {
        X[i] = 1;
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
        while (ok)
        {
            if (check())
                print();
            sinh();
        }
    }
    return 0;
}