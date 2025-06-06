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

ll convert(string s)
{
    ll res = 0;
    for (int i = 0; i < s.size(); ++i)
    {
        res = 10 * res + (s[i] - '0');
    }
    return res;
}

void solve(ll n)
{
    queue<string> q;
    q.push("1");
    while (!q.empty())
    {
        string s = q.front();
        q.pop();
        ll val = convert(s);
        if (val % n == 0)
        {
            cout << s << endl;
            break;
        }
        q.push(s + "0");
        q.push(s + "1");
    }
}

int main()
{
    faster();
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        solve(n);
    }
    return 0;
}