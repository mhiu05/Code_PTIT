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

int a[100], n, ok = 1;
void init()
{
    for (int i = 1; i <= n; ++i)
    {
        a[i] = 0;
    }
}
void sinh()
{
    int i = n;
    while (a[i] == 1 && i >= 1)
    {
        a[i] = 0;
        --i;
    }
    if (i == 0)
        ok = 0;
    else
    {
        a[i] = 1;
        for (int j = i + 1; j < n; ++j)
        {
            a[j] = 0;
        }
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
        init();
        while (ok)
        {
            for (int i = 1; i <= n; ++i)
            {
                cout << a[i];
            }
            cout << " ";
            sinh();
        }
        cout << endl;
        ok = 1;
    }
    return 0;
}