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

int cal(int a, int b, char c)
{
    if (c == '+')
        return a + b;
    if (c == '-')
        return a - b;
    if (c == '*')
        return a * b;
    if (c == '/')
        return a / b;
}

void solve(string s)
{
    stack<int> st;
    for (int i = s.size() - 1; i >= 0; --i)
    {
        if (isdigit(s[i]))
        {
            st.push(s[i] - '0');
        }
        else
        {
            int a = st.top();
            st.pop();
            int b = st.top();
            st.pop();
            st.push(cal(a, b, s[i]));
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
        string s;
        cin >> s;
        solve(s);
    }
    return 0;
}