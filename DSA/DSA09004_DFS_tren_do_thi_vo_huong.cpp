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

int n, m, X;
int vs[1005];
vector<int> a[1005];

void dfs(int u)
{
    cout << u << " ";
    vs[u] = 1;
    for (int i = 0; i < a[u].size(); ++i)
    {
        int v = a[u][i];
        if (!vs[v])
        {
            dfs(v);
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
        cin >> n >> m >> X;
        memset(vs, 0, sizeof(vs));
        for (int i = 1; i <= n; ++i)
        {
            a[i].clear();
        }
        for (int i = 1; i <= m; ++i)
        {
            int x, y;
            cin >> x >> y;
            a[x].push_back(y);
            a[y].push_back(x);
        }
        dfs(X);
        cout << endl;
    }
    return 0;
}