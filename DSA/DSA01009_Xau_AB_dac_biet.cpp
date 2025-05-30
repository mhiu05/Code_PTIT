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

int n, k, a[105];

int check()
{
    int cnt = 0;
    int max_len = 0;
    for (int i = 1; i <= n; ++i)
    {
        if ((char)a[i] == 'A')
        {
            ++cnt;
            max_len = max(max_len, cnt);
        }
        else
            cnt = 0;
    }
    return max_len == k;
}

vector<vector<int>> ans;
void backtrack(int j)
{
    for (int i = (int)'A'; i <= (int)'B'; ++i)
    {
        a[j] = i;
        if (j == n)
        {
            if (check())
            {
                vector<int> tmp;
                for (int x = 1; x <= n; ++x)
                {
                    tmp.push_back(a[x]);
                }
                ans.push_back(tmp);
            }
        }
        else
            backtrack(j + 1);
    }
}

int main()
{
    faster();
    cin >> n >> k;
    backtrack(1);
    cout << ans.size() << endl;
    for (int i = 0; i < ans.size(); ++i)
    {
        for (int j = 0; j < ans[i].size(); ++j)
            cout << (char)ans[i][j];
        cout << endl;
    }
    return 0;
}