#include <bits/stdc++.h>
using namespace std;
char a[100][100];
int n, m;
pair<int, int> path[4] = {{-1, 0}, {0, -1}, {0, 1}, {1, 0}};
void loang(int i, int j)
{
    a[i][j] = '*';
    for (int k = 0; k < 4; k++)
    {
        int im = i + path[k].first, jm = j + path[k].second;
        if (im >= 1 && im <= n && jm >= 1 && jm <= m && a[im][jm] == 'O')
        {
            loang(im, jm);
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                cin >> a[i][j];
            }
        }
        for (int i = 1; i <= n; i++)
        {
            if (a[i][1] == 'O')
                loang(i, 1);
            if (a[i][m] == 'O')
                loang(i, m);
        }
        for (int j = 1; j <= m; j++)
        {
            if (a[1][j] == 'O')
                loang(1, j);
            if (a[n][j] == 'O')
                loang(n, j);
        }
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                if (a[i][j] != '*')
                {
                    cout << "X" << " ";
                }
                else
                    cout << "O" << " ";
            }
            cout << endl;
        }
    }
}