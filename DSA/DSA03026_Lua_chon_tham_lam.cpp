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

void min_val(int s, int d)

{
    if (s > 9 * d || d == 0 || (s == 0 && d != 1))
    {
        cout << -1 << " ";
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
    cout << " ";
}

void max_val(int s, int d)
{
    if (s > 9 * d || d == 0 || (s == 0 && d != 1))
    {
        cout << -1;
        return;
    }
    int x = s / 9, k = s % 9;
    for (int i = 1; i <= x; ++i)
        cout << 9;
    cout << k;
    d = d - x - 1;
    for (int i = 1; i <= d; ++i)
        cout << 0;
}

int main()
{
    faster();
    int d, s;
    cin >> d >> s;
    min_val(s, d);
    max_val(s, d);
    return 0;
}