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
    int total_len = 0;
    for (int i = 0; i < s.size(); ++i)
    {
        if (s[i] == ')')
        {
            if (!st.empty())
            {
                total_len += 2;
                st.pop();
            }
        }
        else
        {
            st.push(s[i]);
        }
    }
    cout << total_len << endl;
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