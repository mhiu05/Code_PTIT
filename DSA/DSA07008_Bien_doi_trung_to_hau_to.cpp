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

int eval(char c)
{
    if (c == '(')
        return 0;
    if (c == '+' || c == '-')
        return 1;
    if (c == '*' || c == '/')
        return 2;
    return 3;
}

void solve(string s)
{
    stack<char> st;
    for (char c : s)
    {
        if (c == '(')
            st.push(c);
        else if (isalpha(c))
            cout << c;
        else if (c == ')')
        {
            while (!st.empty())
            {
                char tmp = st.top();
                st.pop();
                if (tmp == '(')
                    break;
                cout << tmp;
            }
        }
        else
        {
            while (!st.empty() && eval(c) <= eval(st.top()))
            {
                cout << st.top();
                st.pop();
            }
            st.push(c);
        }
    }
    while (!st.empty())
    {
        if (st.top() != '(')
        {
            cout << st.top();
        }
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