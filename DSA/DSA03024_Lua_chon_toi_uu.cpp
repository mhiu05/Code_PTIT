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
    if (a.second != b.second)
        return a.second < b.second;
    else
        return a.first < b.first;
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
        vector<pair<int, int>> a;
        for (int i = 1; i <= n; ++i)
        {
            int x, y;
            cin >> x >> y;
            a.push_back({x, y});
        }
        sort(a.begin(), a.end(), cmp);
        int curr = a[0].second;
        int ans = 0;
        for (int i = 1; i < a.size(); ++i)
        {
            if (a[i].first >= curr)
            {
                curr = a[i].second;
                ++ans;
            }
        }
        cout << ans + 1 << endl;
    }
    return 0;
}