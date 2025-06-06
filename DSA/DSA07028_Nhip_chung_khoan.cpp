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
    vector<int> L;
    stack<int> st;
    for (int i = 0; i < n; ++i)
    {
        if (!st.empty())
        {
            while (!st.empty() && v[st.top()] <= v[i])
                st.pop();
            if (!st.empty())
                L.push_back(st.top());
            else
                L.push_back(-1);
        }
        else
        {
            L.push_back(-1);
        }
        st.push(i);
    }
    for (int i = 0; i < n; ++i)
    {
        cout << i - L[i] << " ";
    }
    cout << endl;
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