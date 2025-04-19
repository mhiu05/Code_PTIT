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

int cmp(string a, string b)
{
    return a + b > b + a;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<string> v;
        for (int i = 0; i < n; ++i)
        {
            string x;
            cin >> x;
            v.push_back(x);
        }
        sort(v.begin(), v.end(), cmp);
        for (string s : v)
            cout << s;
        cout << endl;
    }
    return 0;
}