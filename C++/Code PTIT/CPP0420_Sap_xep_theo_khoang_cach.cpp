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

int n, k;
int cmp(int a, int b)
{
    return abs(a - k) < abs(b - k);
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
        cin >> n >> k;
        int a[n];
        for (int &x : a)
            cin >> x;
        stable_sort(a, a + n, cmp);
        for (int x : a)
            cout << x << " ";
        cout << endl;
    }
    return 0;
}