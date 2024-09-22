#include <bits/stdc++.h>
#define fi first
#define se second
#define ms(a, n) memset(a, n, sizeof(a))
#define endl "\n"
using namespace std;

using ll = long long;

typedef pair<ll, ll> pl;
typedef vector<pl> vll;
typedef pair<int, int> pi;
typedef vector<pi> vii;

const int modi = 1000000007;
const ll modl = 1e18 + 7;

int prime[1000000];
void sieve()
{
    for (int i = 0; i <= 1000000; ++i)
    {
        prime[i] = 1;
    }
    prime[0] = prime[1] = 0;
    for (int i = 2; i <= sqrt(1000000); ++i)
    {
        for (int j = i * i; j <= 1000000; j += i)
        {
            prime[j] = 0;
        }
    }
}

int scp(int n)
{
    int can = sqrt(n);
    if (can * can == n)
        return 1;
    else
        return 0;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    sieve();
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        for (int i = 1; i <= n; ++i)
        {
            if (prime[i] && prime[n - i])
            {
                cout << i << " " << n - i << endl;
                break;
            }
        }
    }
    return 0;
}