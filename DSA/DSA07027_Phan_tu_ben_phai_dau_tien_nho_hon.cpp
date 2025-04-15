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

void solve(vector<int> &v, int n)
{
    stack<int> st;
    vector<int> R(n);
    for (int i = n - 1; i >= 0; --i)
    {
        while (!st.empty() && v[i] >= st.top())
            st.pop();
        if (st.empty())
            R[i] = -1;
        else
        {
            R[i] = st.top();
        }
        st.push(v[i]);
    }
    for (int i = 0; i < n; ++i)
        cout << R[i] << " ";
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