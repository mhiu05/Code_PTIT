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
        map<char, int> mp;
        for (char c : s)
            mp[c]++;
        priority_queue<int> pq;
        for (auto it : mp)
            pq.push(it.second);
        while (k--)
        {
            int a = pq.top();
            pq.pop();
            --a;
            pq.push(a);
        }
        ll ans = 0;
        while (pq.size())
        {
            ans += 1ll * pq.top() * pq.top();
            pq.pop();
        }
        cout << ans << endl;
    }
    return 0;
}