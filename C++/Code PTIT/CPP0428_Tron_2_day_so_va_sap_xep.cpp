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

    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int a[n], b[m];
        vector<int> v;
        for (int &x : a)
        {
            cin >> x;
            v.push_back(x);
        }
        for (int &x : b)
        {
            cin >> x;
            v.push_back(x);
        }
        sort(v.begin(), v.end());
        for (int x : v)
            cout << x << " ";
        cout << endl;
    }
    return 0;
}