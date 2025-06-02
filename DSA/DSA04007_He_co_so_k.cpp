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

void solve(int k, string a, string b)
{
    int n = max(a.size(), b.size());
    while (a.size() != n)
        a = "0" + a;
    while (b.size() != n)
        b = "0" + b;
    vector<int> ans;
    int carry = 0;
    for (int i = a.size() - 1; i >= 0; --i)
    {
        int x = (a[i] - '0') + (b[i] - '0') + carry;
        carry = x / k;
        ans.push_back(x % k);
    }
    if (carry != 0)
    {
        ans.push_back(carry);
    }
    for (int i = ans.size() - 1; i >= 0; --i)
        cout << ans[i];
    cout << endl;
}

int main()
{
    faster();
    int t;
    cin >> t;
    while (t--)
    {
        int k;
        string a, b;
        cin >> k >> a >> b;
        solve(k, a, b);
    }
    return 0;
}