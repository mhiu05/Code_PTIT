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

int prime[100005];
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

int tcs(int n)
{
    int sum = 0;
    while (n)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int SumOfSnt(int n)
{
    int tong = 0;
    for (int i = 2; i <= sqrt(n); ++i)
    {
        if (n % i == 0)
        {
            while (n % i == 0)
            {
                tong += tcs(i);
                n /= i;
            }
        }
    }
    if (n != 1)
        tong += tcs(n);
    return tong;
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
        if (!prime[n] && SumOfSnt(n) == tcs(n))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}