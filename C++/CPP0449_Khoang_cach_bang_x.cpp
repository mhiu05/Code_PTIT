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
        int n, x;
        cin >> n >> x;
        int a[n];
        set<int> se;
        for (int &x : a)
        {
            cin >> x;
            se.insert(x);
        }
        se.insert(a[0]);
        int check = -1;
        for (int i = 1; i < n; ++i)
        {
            if (se.find(a[i] + x) != se.end())
            {
                check = 1;
            }
        }
        cout << check << endl;
    }
    return 0;
}