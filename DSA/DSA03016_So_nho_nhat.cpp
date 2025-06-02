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

void solve(int s, int d)

{
    if (s > 9 * d)
    {
        cout << -1 << endl;
        return;
    }
    vector<int> ans;
    while (s >= 10)
    {
        ans.push_back(9);
        s -= 9;
        d -= 1;
    }
    if (d == 1)
    {
        ans.push_back(s);
    }
    else if (d > 1)
    {
        ans.push_back(s - 1);
        --d;
        while (d - 1)
        {
            ans.push_back(0);
            --d;
        }
        ans.push_back(1);
    }
    for (int i = ans.size() - 1; i >= 0; --i)
        cout << ans[i];
    cout << endl;
}

int main()
{
    faster();
    int t;
    cin >> t;
    while (t--)
    {
        int s, d;
        cin >> s >> d;
        solve(s, d);
    }
    return 0;
}