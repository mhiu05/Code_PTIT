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

int cmp(pair<int, int> a, pair<int, int> b)
{
    return a.second < b.second;
}

int solve(vector<pair<int, int>> &v, int n)
{
    int ans = 1;
    int end = v[0].second;
    for (int i = 1; i < n; ++i)
    {
        if (v[i].first > end)
        {
            ++ans;
            end = v[i].second;
        }
    }
    return ans;
}

int main()
{
    faster();
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n], b[n];
        for (int &x : a)
            cin >> x;
        for (int &x : b)
            cin >> x;
        vector<pair<int, int>> v;
        for (int i = 0; i < n; ++i)
        {
            v.push_back({a[i], b[i]});
        }
        sort(v.begin(), v.end(), cmp);
        cout << solve(v, n) << endl;
    }
    return 0;
}