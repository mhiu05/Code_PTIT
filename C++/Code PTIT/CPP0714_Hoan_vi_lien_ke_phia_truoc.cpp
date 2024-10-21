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

int n, a[1005];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (int i = 1; i <= n; ++i)
        {
            cin >> a[i];
        }
        int i = n - 1;
        while (a[i] < a[i + 1])
            --i;
        int j = n;
        while (a[j] > a[j - 1])
            --j;
        swap(a[i], a[j]);
        reverse(a + i + 1, a + n + 1);
        for (int i = 1; i <= n; ++i)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
