#include <bits/stdc++.h>
#define fi first
#define se second
#define ms(a, n) memset(a, n, sizeof(a))
#define endl "\n"
#define PI 3.141592653589793238
using namespace std;

using ll = long long;

typedef pair<ll, ll> pl;
typedef vector<pl> vll;
typedef pair<int, int> pi;
typedef vector<pi> vii;

const int modi = 1000000007;
const ll modl = 1e18 + 7;

ll C[1005][1005];
void sieve()
{
    C[1][0] = 1;
    C[1][1] = 1;
    for (int i = 2; i <= 1000; ++i)
    {
        for (int j = 0; j <= i; ++j)
        {
            if (j == 0 || i == j)
                C[i][j] = 1;
            else
            {
                C[i][j] = C[i - 1][j - 1] + C[i - 1][j];
                C[i][j] %= modi;
            }
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
        int n, r;
        cin >> n >> r;
        cout << C[n][r] << endl;
    }
    return 0;
}