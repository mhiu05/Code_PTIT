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

vector<int> adj[1005];
vector<pair<int, int>> v, ans;
int n, m;
int vs[1005];

void init()
{
    cin >> n >> m;
    for (int i = 1; i <= m; ++i)
    {
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
        v.push_back({x, y});
    }
}

void dfs(int u)
{
    vs[u] = 1;
    for (int i = 0; i < adj[u].size(); ++i)
    {
        int h = adj[u][i];
        if (!vs[h])
        {
            dfs(h);
        }
    }
}

void solve()
{
}

int main()
{
    faster();
    int t;
    cin >> t;
    while (t--)
    {
        init();
    }
    return 0;
}