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

    int n;
    cin >> n;
    int a[1005][10];
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            cin >> a[i][j];
        }
    }
    int cnt = 0;
    for (int i = 0; i < n; ++i)
    {
        int CntOf_0 = 0, CntOf_1 = 0;
        for (int j = 0; j < 3; ++j)
        {
            if (a[i][j] == 1)
                ++CntOf_1;
            else
                ++CntOf_0;
        }
        if (CntOf_1 > CntOf_0)
            ++cnt;
    }
    cout << cnt;
    return 0;
}