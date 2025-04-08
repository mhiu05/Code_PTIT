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

void process(string s)
{
    stack<char> st;
    for (char c : s)
    {
        if (c == ')')
        {
            bool check = true;
            while (st.top() != '(' && !st.empty())
            {
                char tmp = st.top();
                if (tmp == '+' || tmp == '-' || tmp == '*' || tmp == '/')
                {
                    check = false;
                }
                st.pop();
            }
            if (check)
            {
                cout << "Yes\n";
                return;
            }
            st.pop();
        }
        else
            st.push(c);
    }
    cout << "No\n";
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
        process(s);
    }
    return 0;
}