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
const int MAXN = 1000005;

int n, m;

set<int> se[MAXN];

void In()
{
    cin >> n >> m;
    for (int i = 1; i <= m; ++i)
    {
        int x, y;
        cin >> x >> y;
        se[x].insert(y);
        se[y].insert(x);
    }
}

void Out()
{
    for (int i = 1; i <= n; ++i)
    {
        cout << i << ": ";
        for (int x : se[i])
            cout << x << " ";
        cout << endl;
    }
}

void reset()
{
    for (int i = 1; i <= n; ++i)
    {
        se[i].clear();
    }
}

int main()
{
    faster();
    int t;
    cin >> t;
    while (t--)
    {
        In();
        Out();
        reset();
    }
    return 0;
}