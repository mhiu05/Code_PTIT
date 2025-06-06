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

void solve(string s, int k)
{
    map<char, int> mp;
    priority_queue<int> pq;
    for (char c : s)
        mp[c]++;
    for (auto it : mp)
    {
        pq.push(it.second);
    }

    for (int i = 1; i <= k; ++i)
    {
        int a = pq.top();
        pq.pop();
        --a;
        pq.push(a);
    }
    ll sum = 0;
    while (!pq.empty())
    {
        ll a = pq.top();
        pq.pop();
        sum += a * a;
    }
    cout << sum << endl;
}

int main()
{
    faster();
    int t;
    cin >> t;
    while (t--)
    {
        int k;
        cin >> k;
        string s;
        cin >> s;
        solve(s, k);
    }
    return 0;
}