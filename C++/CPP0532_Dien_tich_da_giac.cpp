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

int main()
{
    faster();
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<pair<int, int>> v;
        for (int i = 1; i <= n; ++i)
        {
            int x, y;
            cin >> x >> y;
            v.push_back({x, y});
        }
        double S = 0;
        for (int i = 0; i < n; ++i)
        {
            S += v[i].first * v[(i + 1)].second - v[(i + 1)].first * v[i].second;
        }
        S = abs(S) * 0.5;
        cout << fixed << setprecision(3) << S << endl;
    }

    return 0;
}