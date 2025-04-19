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
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> v[i];
        }
        int k, x;
        cin >> k >> x;
        int pos = 0;
        for (int i = 0; i < n; ++i)
        {
            if (x == v[i])
            {
                pos = i;
                break;
            }
        }
        for (int i = pos - k / 2; i < pos; ++i)
        {
            cout << v[i] << " ";
        }
        for (int i = pos + 1; i <= pos + k / 2; ++i)
        {
            cout << v[i] << " ";
        }
        cout << endl;
    }
    return 0;
}