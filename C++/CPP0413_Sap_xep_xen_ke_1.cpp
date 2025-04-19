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
        vector<int> v;
        for (int i = 0; i < n; ++i)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        while (v.size() > 0)
        {
            auto it1 = max_element(v.begin(), v.end());
            cout << *it1 << " ";
            v.erase(it1);
            if (v.size() > 0)
            {
                auto it2 = min_element(v.begin(), v.end());
                cout << *it2 << " ";
                v.erase(it2);
            }
        }
        cout << endl;
    }
    return 0;
}