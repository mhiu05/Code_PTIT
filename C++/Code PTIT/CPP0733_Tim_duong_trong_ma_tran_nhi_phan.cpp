#include <bits/stdc++.h>
using namespace std;
int a[1005][1005];
int s, t, u, v, m, n;
int dx[4] = {-1, 0, 0, 1};
int dy[4] = {0, -1, 1, 0};
int d[1005][1005];
void inp()
{
    cin >> n >> m >> s >> t >> u >> v;
    s++;
    t++;
    u++;
    v++;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
            cin >> a[i][j];
    }
    memset(d, 0, sizeof(d));
}
void bfs(int i, int j)
{
    queue<pair<int, int>> q;
    q.push({i, j});
    a[i][j] = 0;
    while (!q.empty())
    {
        pair<int, int> top = q.front();
        q.pop();
        for (int k = 0; k < 4; k++)
        {
            int i1 = top.first + dx[k];
            int j1 = top.second + dy[k];
            if (i1 >= 1 && i1 <= n && j1 >= 1 && j1 <= m && a[i1][j1])
            {
                d[i1][j1] = d[top.first][top.second] + 1;
                q.push({i1, j1});
                a[i1][j1] = 0;
                if (i1 == u && j1 == v)
                    return;
            }
        }
    }
}
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        inp();
        if (s == u && t == v)
            cout << 0 << endl;
        else if (a[s][t] && a[u][v])
        {
            bfs(s, t);
            if (d[u][v])
                cout << d[u][v] << endl;
            else
                cout << -1 << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
}