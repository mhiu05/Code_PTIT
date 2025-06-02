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
        ll cost = 0;
        while (pq.size() > 1)
        {
            ll a = pq.top();
            pq.pop();
            ll b = pq.top();
            pq.pop();
            cost += (a + b) % mod;
            pq.push((a + b) % mod);
        }
        cout << cost % mod << endl;
    }
    return 0;
}