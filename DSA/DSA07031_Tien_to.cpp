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

ll cal(ll a, ll b, string s)
{
    if (s == "+")
        return a + b;
    if (s == "-")
        return a - b;
    if (s == "*")
        return a * b;
    return a / b;
}

void solve(vector<string> v, int n)
{
    stack<ll> st;
    for (int i = n - 1; i >= 0; --i)
    {
        if (v[i] != "+" && v[i] != "-" && v[i] != "*" && v[i] != "/")
        {
            ll res = 0;
            int check = 0;
            for (int j = 0; j < v[i].size(); ++j)
            {
                if (v[i][j] == '-')
                {
                    check = 1;
                    continue;
                }
                res = 10 * res + (v[i][j] - '0');
            }
            if (check)
                res = res * (-1);
            st.push(res);
        }
        else
        {
            ll a = st.top();
            st.pop();
            ll b = st.top();
            st.pop();
            st.push(cal(a, b, v[i]));
        }
    }
    cout << st.top() << endl;
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
        vector<string> v;
        for (int i = 0; i < n; ++i)
        {
            string s;
            cin >> s;
            v.push_back(s);
        }
        solve(v, n);
    }
    return 0;
}