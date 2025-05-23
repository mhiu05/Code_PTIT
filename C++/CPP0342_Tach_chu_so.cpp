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
        string s;
        cin >> s;
        int k = 0;
        string tmp;
        for (int i = 0; i < s.size(); ++i)
        {
            if (isdigit(s[i]))
            {
                k += s[i] - '0';
                continue;
            }
            else
                tmp = tmp + s[i];
        }
        sort(tmp.begin(), tmp.end());
        cout << tmp << k << endl;
        ;
    }
    return 0;
}