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

int main()
{
    faster();
    int t;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;
        ll sum = n * (n + 1) / 2;
        ll s1 = (sum + m) / 2, s2 = (sum - m) / 2;
        if (sum < m || (sum + m) % 2 != 0)
        {
            cout << "No\n";
        }
        else
        {
            if (__gcd(s1, s2) != 1)
                cout << "No\n";
            else
                cout << "Yes\n";
        }
    }
    return 0;
}