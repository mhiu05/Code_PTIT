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

void solve()
{
    int n;
    cin >> n;
    int a[n];
    for (int &x : a)
        cin >> x;
    vector<int> v;
    for (int x : a)
    {
        if (x != 0)
            v.push_back(x);
    }
    sort(v.begin(), v.end());
    ll res1 = 0, res2 = 0;
    int cv = 0;
    while (v.size())
    {
        if (cv % 2 == 0)
        {
            res1 = 1ll * 10 * res1 + *v.begin();
        }
        else
        {
            res2 = 1ll * 10 * res2 + *v.begin();
        }
        v.erase(v.begin());
        ++cv;
    }
    cout << res1 + res2 << endl;
}

int main()
{
    faster();
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}