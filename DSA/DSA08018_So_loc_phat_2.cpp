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

int cmp(string a, string b)
{
    if (a.size() != b.size())
    {
        return a.size() < b.size();
    }
    else
        return a < b;
}

void solve(int n)
{
    vector<string> ans;
    queue<string> q;
    q.push("6");
    q.push("8");
    while (!q.empty())
    {
        string s = q.front();
        q.pop();
        if (s.size() > n)
            break;
        ans.push_back(s);

        q.push(s + "6");
        q.push(s + "8");
    }
    sort(ans.begin(), ans.end(), cmp);
    cout << ans.size() << endl;
    for (string s : ans)
        cout << s << " ";
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