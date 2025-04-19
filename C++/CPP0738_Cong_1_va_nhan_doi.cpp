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

bool isEven(ll a[], int n)
{
    for (int i = 0; i < n; ++i)
    {
        if (a[i] % 2 != 0)
            return false;
    }
    return true;
}

bool check(ll a[], int n)
{
    for (int i = 0; i < n; ++i)
    {
        if (a[i] != 0)
            return 0;
    }
    return 1;
}
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
        ll a[n];
        for (ll &x : a)
            cin >> x;
        int step = 0;
        while (!check(a, n))
        {
            if (isEven(a, n))
            {
                ++step;
                for (int i = 0; i < n; ++i)
                {
                    a[i] /= 2;
                }
            }
            else
            {
                for (int i = 0; i < n; ++i)
                {
                    if (a[i] % 2 != 0)
                    {
                        a[i] -= 1;
                        ++step;
                    }
                }
            }
        }
        cout << step << endl;
    }
    return 0;
}