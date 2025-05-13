#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int n, m;
vector<int> adj[1005];
int vs[1005];

void dfs(int u, vector<int> a[])
{
    vs[u] = 1;
    for (int i = 0; i < a[u].size(); ++i)
    {
        if (!vs[a[u][i]])
            dfs(a[u][i], a);
    }
}

void init()
{
    cin >> n >> m;
    for (int i = 1; i <= n; ++i)
    {
        adj[i].clear();
    }
    for (int i = 1; i <= m; ++i)
    {
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    for (int i = 1; i <= n; ++i)
    {
        vs[i] = 0;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        init();
        int tplt = 0;
        for (int i = 1; i <= n; ++i)
        {
            if (!vs[i])
            {
                ++tplt;
                dfs(i, adj);
            }
        }

        for (int i = 1; i <= n; ++i)
        {
            // loại bỏ đỉnh i và cạnh liên thuộc lưu vào tmp
            vector<int> tmp[n + 1];
            for (int j = 1; j <= n; ++j)
            {
                if (j == i)
                    continue;
                vector<int> new_list;
                for (int x : adj[j])
                {
                    if (x != i)
                    {
                        new_list.push_back(x);
                    }
                }
                tmp[j] = new_list;
            }

            // reset mảng vs
            for (int j = 1; j <= n; ++j)
            {
                vs[j] = 0;
            }
            vs[i] = 1;
            // tính tplt mới sau khi đã xóa đỉnh i và cạnh liên thuộc
            int new_tplt = 0;
            for (int j = 1; j <= n; ++j)
            {
                if (j == i)
                    continue;
                if (!vs[j])
                {
                    ++new_tplt;
                    dfs(j, tmp);
                }
            }
            if (new_tplt > tplt)
                cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}