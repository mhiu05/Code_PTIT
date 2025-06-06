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

void solve(vector<int> v, int n)
{
    vector<int> R, L;
    stack<int> st1, st2;
    for (int i = n - 1; i >= 0; --i)
    {
        if (!st1.empty())
        {
            while (!st1.empty() && v[st1.top()] >= v[i])
                st1.pop();
            if (!st1.empty())
            {
                R.push_back(st1.top());
            }
            else
            {
                R.push_back(n);
            }
        }
        else
        {
            R.push_back(n);
        }
        st1.push(i);
    }
    reverse(R.begin(), R.end());

    for (int i = 0; i <= n - 1; ++i)
    {
        if (!st2.empty())
        {
            while (!st2.empty() && v[st2.top()] >= v[i])
                st2.pop();
            if (!st2.empty())
            {
                L.push_back(st2.top());
            }
            else
            {
                L.push_back(-1);
            }
        }
        else
        {
            L.push_back(-1);
        }
        st2.push(i);
    }

    ll max_len = 0;
    for (int i = 0; i < n; ++i)
    {
        max_len = max(max_len, 1ll * v[i] * (R[i] - L[i] - 1));
    }
    cout << max_len << endl;
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
        vector<int> v(n);
        for (int &x : v)
            cin >> x;
        solve(v, n);
    }
    return 0;
}