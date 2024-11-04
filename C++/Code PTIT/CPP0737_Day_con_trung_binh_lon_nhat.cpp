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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int a[n];
        for (int &x : a)
            cin >> x;
        double sum = INT_MIN;
        int pos = -1;
        for (int i = 0; i <= n - k; ++i)
        {
            double tmp = 0;
            for (int j = 0; j < k; ++j)
            {
                tmp += 1.0 * a[i + j];
            }
            if (sum < (tmp / k))
            {
                sum = tmp / k;
                pos = i;
            }
        }
        for (int i = 0; i < k; ++i)
        {
            cout << a[i + pos] << " ";
        }
        cout << endl;
    }
    return 0;
}