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

int check(string s)
{
    int odd = 0, even = 0;
    for (int i = 0; i < s.size(); ++i)
    {
        if (i % 2 == 0)
        {
            odd += s[i] - '0';
        }
        else
            even += s[i] - '0';
    }
    if (abs(odd - even) % 11 == 0)
        return 1;
    return 0;
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
        if (check(s))
            cout << "1\n";
        else
            cout << "0\n";
    }
    return 0;
}