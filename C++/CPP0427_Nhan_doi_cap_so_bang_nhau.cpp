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
        int n;
        cin >> n;
        int a[n];
        for (int &x : a)
            cin >> x;
        for (int i = 0; i < n - 1; ++i)
        {
            if (a[i] != 0 && a[i] == a[i + 1])
            {
                a[i] *= 2;
                a[i + 1] = 0;
            }
        }
        int cnt = 0;
        for (int i = 0; i < n; ++i)
        {
            if (a[i] != 0)
            {
                cout << a[i] << " ";
            }
            else
                ++cnt;
        }
        for (int i = 1; i <= cnt; ++i)
        {
            cout << "0 ";
        }
        cout << endl;
    }
    return 0;
}