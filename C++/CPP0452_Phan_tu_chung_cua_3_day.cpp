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
const int MAXN = 1e6 + 5;

int main()
{
    faster();
    int t;
    cin >> t;
    while (t--)
    {

        int n, m, p;
        cin >> n >> m >> p;
        set<ll> se1, se2, se3;
        for (int i = 0; i < n; ++i)
        {
            ll x;
            cin >> x;
            se1.insert(x);
        }
        for (int i = 0; i < m; ++i)
        {
            ll x;
            cin >> x;
            se2.insert(x);
        }
        for (int i = 0; i < p; ++i)
        {
            ll x;
            cin >> x;
            se3.insert(x);
        }
        map<ll, ll> mp;
        for (auto x : se1)
        {
            mp[x]++;
        }
        for (auto x : se2)
        {
            mp[x]++;
        }
        for (auto x : se3)
        {
            mp[x]++;
        }
        int check = 0;
        for (auto it : mp)
        {
            if (it.second == 3)
            {
                cout << it.first << " ";
                check = 1;
            }
        }
        if (!check)
            cout << -1;
        cout << endl;
    }
    return 0;
}