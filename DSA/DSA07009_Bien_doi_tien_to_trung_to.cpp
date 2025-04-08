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
    stack<string> st;
    for (int i = s.size() - 1; i >= 0; --i)
    {
        if (isalpha(s[i]))
        {
            st.push(string(1, s[i]));
        }
        else
        {
            string a = st.top();
            st.pop();
            string b = st.top();
            st.pop();
            st.push("(" + a + s[i] + b + ")");
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