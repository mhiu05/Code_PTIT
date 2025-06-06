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

struct Move
{
    int i, j, step;
};

int vs[1005][1005];
int a[1005][1005];
void solve(int n, int m)
{
    memset(vs, 0, sizeof(vs));
    queue<Move> q;
    q.push({1, 1, 0});
    vs[1][1] = 1;
    while (!q.empty())
    {
        Move curr = q.front();
        q.pop();

        int i = curr.i, j = curr.j, s = curr.step;

        if (i == n && j == m)
        {
            cout << s << endl;
            return;
        }

        int jump = a[i][j];

        // Move down
        if (i + jump <= n && !vs[i + jump][j])
        {
            vs[i + jump][j] = 1;
            q.push({i + jump, j, s + 1});
        }

        // Move right
        if (j + jump <= m && !vs[i][j + jump])
        {
            vs[i][j + jump] = 1;
            q.push({i, j + jump, s + 1});
        }
    }
    cout << -1 << endl;
}

int main()
{
    faster();
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        for (int i = 1; i <= n; ++i)
        {
            for (int j = 1; j <= m; ++j)
            {
                cin >> a[i][j];
            }
        }
        solve(n, m);
    }
    return 0;
}