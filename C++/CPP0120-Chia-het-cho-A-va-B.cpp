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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int m, n;
        cin >> m >> n;
        int a, b;
        cin >> a >> b;
        int cnt = 0;
        for (int i = m; i <= n; ++i)
        {
            if ((i % a == 0) || (i % b == 0))
                ++cnt;
        }
        cout << cnt << endl;
    }
    return 0;
}