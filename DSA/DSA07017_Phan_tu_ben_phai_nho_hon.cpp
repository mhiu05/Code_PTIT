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

vector<int> nextGreater(vector<int> &v, int n)
{
    vector<int> R(n);
    stack<int> st;
    for (int i = n - 1; i >= 0; --i)
    {
        while (!st.empty() && v[i] >= st.top())
        {
            st.pop();
        }
        if (st.size() == 0)
        {
            R[i] = -1;
        }
        else
        {
            R[i] = st.top();
        }
        st.push(v[i]);
    }
    return R;
}

vector<int> nextSmaller(vector<int> &v, int n)
{
    vector<int> R(n);
    stack<int> st;
    for (int i = n - 1; i >= 0; --i)
    {
        while (!st.empty() && v[i] <= v[st.top()])
            st.pop();
        if (st.empty())
            R[i] = -1;
        else
            R[i] = v[st.top()];
        st.push(i);
    }
    return R;
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
        vector<int> ng = nextGreater(v, n);
        vector<int> ns = nextSmaller(v, n);
        for (int i = 0; i < n; ++i)
        {
            if (ng[i] == -1)
                cout << -1 << " ";
            else
            {
                auto it = find(v.begin() + i + 1, v.end(), ng[i]);
                int idx = (it != v.end() ? it - v.begin() : -1);
                cout << (idx != -1 ? ns[idx] : -1) << " ";
            }
        }
        cout << endl;
    }
    return 0;
}