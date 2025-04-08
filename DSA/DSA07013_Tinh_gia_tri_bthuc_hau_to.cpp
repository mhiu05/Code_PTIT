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
    if (c == '/')
        return a / b;
    if (c == '*')
        return a * b;
    return 0;
}

void solve(string s)
{
    stack<int> st;
    for (int i = 0; i < s.size(); ++i)
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            st.push(s[i] - '0');
        }
        else
        {
            int a = st.top();
            st.pop();
            int b = st.top();
            st.pop();
            st.push(cal(b, a, s[i]));
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