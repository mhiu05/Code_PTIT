#include <bits/stdc++.h>
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

int n, a[100], ok;
void init()
{
    for (int i = 1; i <= n; ++i)
    {
        a[i] = i;
    }
}
void sinh()
{
    int i = n - 1;
    while (i >= 1 && a[i] > a[i + 1])
    {
        --i;
    }
    if (i == 0)
        ok = 0;
    else
    {
        int j = n;
        while (a[i] > a[j])
        {
            --j;
        }
        swap(a[i], a[j]);
        reverse(a + i + 1, a + n + 1);
    }
}
void in()
{
    for (int i = 1; i <= n; ++i)
    {
        cout << a[i];
    }
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
        cin >> n;
        ok = 1;
        init();
        while (ok)
        {
            in();
            cout << " ";
            sinh();
        }
        cout << endl;
    }
    return 0;
}
