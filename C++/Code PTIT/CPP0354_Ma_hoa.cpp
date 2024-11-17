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

void solve(string s)
{
    for (int i = 0; i < s.size() - 1; ++i)
    {
        int cnt = 1;
        while (s[i] == s[i + 1])
        {
            ++i;
            ++cnt;
        }
        cout << s[i] << cnt;
    }
    if (s[s.size() - 1] != s[s.size() - 2])
        cout << s[s.size() - 1] << 1;
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
        string s;
        cin >> s;
        solve(s);
        cout << endl;
    }
    return 0;
}