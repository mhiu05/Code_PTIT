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
    stack<char> st;
    for (char x : s)
    {
        if (x == '(' || x == '[' || x == '{')
        {
            st.push(x);
        }
        else
        {
            if (st.empty())
            {
                cout << "NO\n";
                return;
            }
            else
            {
                char top = st.top();
                if ((x == ')' && top != '(') || (x == ']' && top != '[') || ((x == '}' && top != '{')))
                {
                    cout << "NO\n";
                    return;
                }
                st.pop();
            }
        }
    }
    if (st.empty())
    {
        cout << "YES\n";
        return;
    }
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