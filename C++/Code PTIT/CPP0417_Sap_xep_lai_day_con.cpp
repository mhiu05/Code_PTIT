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
        vector<int> v1, v2;
        for (int i = 0; i < n; ++i)
        {
            int x;
            cin >> x;
            v1.push_back(x);
            v2.push_back(x);
        }
        sort(v1.begin(), v1.end());
        int m1 = 0, m2 = 0;
        for (int i = 0; i < v2.size(); ++i)
        {
            if (v2[i] != v1[i])
            {
                m1 = i;
                break;
            }
        }
        for (int i = v2.size() - 1; i >= 0; --i)
        {
            if (v2[i] != v1[i])
            {
                m2 = i;
                break;
            }
        }
        cout << m1 + 1 << " " << m2 + 1 << endl;
    }
    return 0;
}