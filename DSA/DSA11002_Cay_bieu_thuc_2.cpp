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

void solve(vector<string> v, int n)
{
    queue<string> q;
    for (int i = n - 1; i >= 0; --i)
    {
        if (v[i] != "+" && v[i] != "-" && v[i] != "*" && v[i] != "/")
        {
            q.push(v[i]);
        }
        else
        {
            int a = stoi(q.front());
            q.pop();
            int b = stoi(q.front());
            q.pop();
            q.push(to_string(cal(b, a, v[i][0])));
        }
    }
    cout << q.front() << endl;
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
        vector<string> v;
        for (int i = 0; i < n; ++i)
        {
            string s;
            cin >> s;
            v.push_back(s);
        }
        solve(v, n);
    }
    return 0;
}