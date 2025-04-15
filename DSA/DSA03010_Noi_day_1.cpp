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
        int n;
        cin >> n;
        priority_queue<ll, vector<ll>, greater<ll>> pq;
        for (int i = 1; i <= n; ++i)
        {
            ll x;
            cin >> x;
            pq.push(x);
        }
        ll ans = 0;
        while (pq.size() > 1)
        {
            int a = pq.top();
            pq.pop();
            int b = pq.top();
            pq.pop();
            ans += (a + b);
            pq.push(a + b);
        }
        cout << ans << endl;
    }
    return 0;
}