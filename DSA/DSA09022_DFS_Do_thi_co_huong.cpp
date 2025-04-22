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

int a[1005][1005];
int vs[1005];
int n, m, u;

void dfs(int u)
{
    cout << u << " ";
    vs[u] = 1;
    for (int i = 1; i <= n; ++i)
    {
        if (!vs[i] && a[u][i] == 1)
        {
            dfs(i);
        }
    }
}

void init()
{
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= n; ++j)
        {
            a[i][j] = 0;
        }
    }
    cin >> n >> m >> u;
    for (int i = 1; i <= m; ++i)
    {
        int x, y;
        cin >> x >> y;
        a[x][y] = 1;
    }
    memset(vs, 0, sizeof(vs));
}

int main()
{
    faster();
    int t;
    cin >> t;
    while (t--)
    {
        init();
        dfs(u);
        cout << endl;
    }
    return 0;
}