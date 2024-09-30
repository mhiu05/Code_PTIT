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

int legendry(int n, int p)
{
    int cnt = 0;
    for (int i = p; i <= n; i *= p)
    {
        cnt += n / i;
    }
    return cnt;
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
        int n, p;
        cin >> n >> p;
        cout << legendry(n, p) << endl;
    }
    return 0;
}