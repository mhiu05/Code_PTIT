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

void solve(string s)
{
    stack<int> st;
    int num = 1;
    st.push(num);
    for (int i = 0; i < s.size(); ++i)
    {
        ++num;
        if (s[i] == 'I')
        {
            while (!st.empty())
            {
                cout << st.top();
                st.pop();
            }
        }
        st.push(num);
    }
    while (!st.empty())
    {
        cout << st.top();
        st.pop();
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
        string s;
        cin >> s;
        solve(s);
    }
    return 0;
}