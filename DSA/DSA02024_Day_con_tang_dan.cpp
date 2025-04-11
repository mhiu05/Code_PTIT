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

int n;
int a[21];
vector<int> v;
vector<vector<int>> ans;

int check()
{
    vector<int> tmp;
    int cnt = 0;
    for (int i = 1; i <= n; ++i)
    {
        if (a[i] == 1)
        {
            tmp.push_back(v[i]);
            ++cnt;
        }
    }
    if (cnt < 2)
        return 0;
    for (int i = 1; i < tmp.size(); ++i)
    {
        if (tmp[i] < tmp[i - 1])
            return 0;
    }
    return 1;
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
                        tmp.push_back(v[i]);
                }
                ans.push_back(tmp);
            }
        }
        else
            backtrack(j + 1);
    }
}

void in()
{
    vector<string> vs;
    for (int i = 0; i < ans.size(); ++i)
    {
        string s = "";
        for (int j = 0; j < ans[i].size(); ++j)
        {
            s += to_string(ans[i][j]);
            s += " ";
        }
        vs.push_back(s);
    }
    sort(vs.begin(), vs.end());
    for (int i = 0; i < vs.size(); ++i)
    {
        cout << vs[i] << endl;
    }
}

int main()
{
    faster();
    cin >> n;
    v.resize(n + 1);
    for (int i = 1; i <= n; ++i)
        cin >> v[i];
    backtrack(1);
    in();
    return 0;
}