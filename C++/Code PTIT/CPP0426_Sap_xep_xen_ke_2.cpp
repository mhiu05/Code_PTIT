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
        int x1[1005], x2[1005];
        int k1 = 0, k2 = 0;
        sort(a, a + n);
        for (int i = 0; i < n / 2; ++i)
        {
            x1[k1] = a[i];
            ++k1;
        }
        for (int i = n - 1; i >= n / 2; --i)
        {
            x2[k2] = a[i];
            ++k2;
        }
        k1 = 0;
        k2 = 0;
        int kq[1005];
        int tmp = 0;
        for (int i = 0; i < n; ++i)
        {
            if (i % 2 == 0)
            {
                kq[tmp] = x2[k2];
                tmp++;
                k2++;
            }
            else
            {
                kq[tmp] = x1[k1];
                tmp++;
                k1++;
            }
        }
        for (int i = 0; i < tmp; ++i)
            cout << kq[i] << " ";
        cout << endl;
    }
    return 0;
}