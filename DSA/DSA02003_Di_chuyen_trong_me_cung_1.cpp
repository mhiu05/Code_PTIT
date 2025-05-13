#include <bits/stdc++.h>
#define endl "\n"

using namespace std;

void faster()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

const int MAXN = 15;

int a[MAXN][MAXN];
int n;

struct State
{
    int i, j;
    string path;
};

int main()
{
    faster();
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (int i = 1; i <= n; ++i)
            for (int j = 1; j <= n; ++j)
                cin >> a[i][j];

        vector<string> ans;

        if (a[1][1] == 0 || a[n][n] == 0)
        {
            cout << -1 << endl;
            continue;
        }

        queue<State> q;
        q.push({1, 1, ""});

        while (!q.empty())
        {
            State cur = q.front();
            q.pop();
            int i = cur.i, j = cur.j;
            string path = cur.path;

            if (i == n && j == n)
            {
                ans.push_back(path);
            }

            if (i + 1 <= n && a[i + 1][j] == 1)
            {
                q.push({i + 1, j, path + 'D'});
            }

            if (j + 1 <= n && a[i][j + 1] == 1)
            {
                q.push({i, j + 1, path + 'R'});
            }
        }

        if (ans.empty())
        {
            cout << -1 << endl;
        }
        else
        {
            sort(ans.begin(), ans.end());
            for (string s : ans)
            {
                cout << s << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
