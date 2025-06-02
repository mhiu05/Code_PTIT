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
    int ans = 0;
    for (int i = 0; i < s.size(); ++i)
    {
        if (s[i] == '[')
        {
            st.push(i);
        }
        else
        {
            if (!st.empty())
            {
                st.pop();
            }
            else
            {
                int j = i;
                while (s[j] == ']')
                {
                    ++j;
                }
                ans += j - i;
                swap(s[i], s[j]);
                st.push(i);
            }
        }
    }
    cout << ans << endl;
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