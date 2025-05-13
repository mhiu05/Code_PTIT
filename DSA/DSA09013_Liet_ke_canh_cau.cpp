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

int n, m;
int vs[1005];
vector<int> a[1005], b[1005];

vector<pair<int, int>> v, ans;

void dfs(int u, vector<int> adj[])
{
    vs[u] = 1;
    for (int x : adj[u])
    {
        if (!vs[x])
        {
            dfs(x, adj);
        }
    }
}

void init()
{
    for (int i = 1; i <= n; ++i)
    {
        a[i].clear();
        b[i].clear();
    }
    ans.clear();
    v.clear();
    memset(vs, 0, sizeof(vs));
    cin >> n >> m;
    for (int i = 1; i <= m; ++i)
    {
        int x, y;
        cin >> x >> y;
        v.push_back({x, y});
        a[x].push_back(y);
        a[y].push_back(x);
    }
}

void solve()
{
    int tplt_init = 0;
    for (int i = 1; i <= n; ++i)
    {
        if (!vs[i])
        {
            dfs(i, a);
            tplt_init++;
        }
    }

    for (int i = 0; i < v.size(); ++i)
    {
        int tplt_later = 0;
        for (int j = 1; j <= n; ++j)
            b[j].clear();
        for (int k = 0; k < v.size(); ++k)
        {
            if (k == i)
                continue;
            b[v[k].first].push_back(v[k].second);
            b[v[k].second].push_back(v[k].first);
        }
        memset(vs, 0, sizeof(vs));
        for (int j = 1; j <= n; ++j)
        {
            if (!vs[j])
            {
                dfs(j, b);
                tplt_later++;
            }
        }
        if (tplt_later > tplt_init)
        {
            ans.push_back({v[i].first, v[i].second});
        }
    }
    sort(ans.begin(), ans.end());
    for (int i = 0; i < ans.size(); ++i)
    {
        cout << ans[i].first << " " << ans[i].second << " ";
    }
    cout << endl;
}

int main()
{
    faster();
    int t;
    cin >> t;
    while (t--)
    {
        init();
        solve();
    }
    return 0;
}