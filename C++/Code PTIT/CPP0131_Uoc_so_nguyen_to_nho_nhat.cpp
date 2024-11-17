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

int prime[100000];
void sieve()
{
    for (int i = 0; i <= 100000; ++i)
    {
        prime[i] = 1;
    }
    prime[0] = prime[1] = 0;
    for (int i = 2; i <= sqrt(100000); ++i)
    {
        for (int j = i * i; j <= 100000; j += i)
        {
            prime[j] = 0;
        }
    }
}
int kq(int n)
{
    for (int i = 2; i <= sqrt(n); ++i)
    {
        if (n % i == 0)
        {
            return i;
        }
    }
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
            if (i == 1)
            {
                cout << 1 << " ";
                continue;
            }
            if (i % 2 == 0)
            {
                cout << 2 << " ";
                continue;
            }
            if (prime[i])
            {
                cout << i << " ";
                continue;
            }
            cout << kq(i) << " ";
        }
        cout << endl;
    }
    return 0;
}