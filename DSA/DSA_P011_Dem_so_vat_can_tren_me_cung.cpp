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

int dx[4] = {-1, 0, 0, 1};
int dy[4] = {0, -1, 1, 0};

int cnt = 0;
int n, m;
char a[1001][1001];

void loang(int i, int j)
{
    a[i][j] = '.';
    for (int k = 0; k < 4; ++k)
    {
        int i1 = i + dx[k], j1 = j + dy[k];
        if (i1 >= 0 && i1 < n && j1 >= 0 && j1 < m && a[i1][j1] == '#')
        {
            loang(i1, j1);
        }
    }
}

int main()
{
    faster();
    cin >> n >> m;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            if (a[i][j] == '#')
            {
                ++cnt;
                loang(i, j);
            }
        }
    }
    cout << cnt;
    return 0;
}