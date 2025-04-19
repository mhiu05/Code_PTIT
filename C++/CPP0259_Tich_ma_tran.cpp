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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, m, p;
    cin >> n >> m >> p;
    int a[n][m], b[m][p], c[n][p];
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < p; ++j)
        {
            cin >> b[i][j];
        }
    }
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < p; ++j)
        {
            c[i][j] = 0;
            for (int k = 0; k < m; ++k)
            {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < p; ++j)
        {
            cout << c[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}