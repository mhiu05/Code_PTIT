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

void solve(int n)
{
    queue<string> q;
    q.push("1");
    for (int i = 1; i <= n; ++i)
    {
        string s = q.front();
        q.pop();
        cout << s << " ";
        q.push(s + "0");
        q.push(s + "1");
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
        int n;
        cin >> n;
        solve(n);
    }
    return 0;
}