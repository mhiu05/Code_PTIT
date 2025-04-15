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

ll F[94];
void sieve()
{
    F[0] = 0;
    F[1] = 1;
    for (int i = 2; i <= 93; ++i)
    {
        F[i] = F[i - 1] + F[i - 2];
    }
}

char solve(ll n, ll k)
{
    if (n == 1)
        return 'A';
    if (n == 2)
        return 'B';
    if (k <= F[n - 2])
    {
        return solve(n - 2, k);
    }
    else
        return solve(n - 1, k - F[n - 2]);
}

int main()
{
    faster();
    sieve();
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        cout << solve(n, k) << endl;
    }
    return 0;
}