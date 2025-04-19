#include <bits/stdc++.h>
using namespace std;

void faster()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

using ll = long long;

const int mod = 1e9 + 7;

int n, k;
int a[100][100];

void init()
{
    cin >> n >> k;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cin >> a[i][j];
        }
    }
}

vector<vector<int>> v;
vector<int> tmp;

void brute_force(int i, int j, int sum)
{
    tmp.push_back(a[i][j]);
    sum += a[i][j];
    if (i == n - 1 && j == n - 1)
    {
        if (sum == k)
        {
            v.push_back(tmp);
        }
        tmp.clear();
        return;
    }
    else
    {
        if (i < n - 1)
        {
            brute_force(i + 1, j, sum);
        }
        if (j < n - 1)
        {
            brute_force(i, j + 1, sum);
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
        v.clear();
        tmp.clear();
        init();
        brute_force(0, 0, 0);
        cout << v.size() << endl;
    }
    return 0;
}