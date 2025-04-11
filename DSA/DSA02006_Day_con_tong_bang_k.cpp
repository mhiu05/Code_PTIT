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

int n, k;
int a[11];
vector<vector<int>> ans;
vector<int> v;

int check()
{
    int sum = 0;
    for (int i = 1; i <= n; ++i)
    {
        if (a[i] == 1)
        {
            sum += v[i];
        }
    }
    if (sum == k)
        return 1;
    return 0;
}

void backtrack(int j)
{
    for (int i = 0; i <= 1; ++i)
    {
        a[j] = i;
        if (j == n)
        {
            if (check())
            {
                vector<int> tmp;
                for (int i = 1; i <= n; ++i)
                {
                    if (a[i] == 1)
                    {
                        tmp.push_back(v[i]);
                    }
                }
                sort(tmp.begin(), tmp.end());
                ans.push_back(tmp);
            }
        }
        else
            backtrack(j + 1);
    }
}

void nhap()
{
    cin >> n >> k;
    v.resize(n + 1);
    for (int i = 1; i <= n; ++i)
    {
        cin >> v[i];
    }
    sort(v.begin() + 1, v.end());
}

void in()
{
    if (ans.size() == 0)
    {
        cout << -1 << endl;
        return;
    }
    sort(ans.begin(), ans.end());
    for (int i = 0; i < ans.size(); ++i)
    {
        cout << "[";
        for (int j = 0; j < ans[i].size(); ++j)
        {
            cout << ans[i][j];
            if (j != ans[i].size() - 1)
                cout << " ";
        }
        cout << "] ";
    }
    cout << endl;
}

void reset()
{
    v.clear();
    for (int i = 0; i < ans.size(); ++i)
    {
        ans[i].clear();
    }
    ans.clear();
}

int main()
{
    faster();
    int t;
    cin >> t;
    while (t--)
    {
        nhap();
        backtrack(1);
        in();
        reset();
    }

    return 0;
}