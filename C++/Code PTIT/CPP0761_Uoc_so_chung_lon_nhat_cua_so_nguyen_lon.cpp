#include <bits/stdc++.h>
using namespace std;

void faster()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

using ll = long long;

const int mod = 1e9 + 7;
const int MAXN = 1e5 + 5;

int main()
{
    faster();
    int t;
    cin >> t;
    while (t--)
    {
        ll a;
        cin >> a;
        string b;
        cin >> b;
        ll tmp = 0;
        for (int i = 0; i < b.size(); ++i)
        {
            int x = b[i] - '0';
            tmp = 10 * tmp + x;
            tmp %= a;
        }
        cout << __gcd(a, tmp) << endl;
    }
    return 0;
}