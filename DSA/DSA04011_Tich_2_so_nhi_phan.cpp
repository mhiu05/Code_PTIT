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

ll convert(string a)
{
    ll res = 0;
    for (int i = 0; i < a.size(); ++i)
    {
        res = 2 * res + (a[i] - '0');
    }
    return res;
}

int main()
{
    faster();
    int t;
    cin >> t;
    while (t--)
    {
        string a, b;
        cin >> a >> b;
        cout << convert(a) * convert(b) << endl;
    }
    return 0;
}