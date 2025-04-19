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

void TestCase()
{
    long long b, p;
    cin >> b >> p;
    long long res = 0;
    for (long long i = 1; i < p; ++i)
    {
        if ((i * i) % p == 1)
        {
            long long last = i + p * (b / p);
            if (last > b)
                last -= p;
            res += (last - i) / p + 1;
        }
    }
    cout << res << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int T;
    cin >> T;
    while (T--)
    {
        TestCase();
    }
    return 0;
}