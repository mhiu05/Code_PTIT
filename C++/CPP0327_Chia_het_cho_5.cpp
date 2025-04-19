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
        int cnt = 0, kq = 0;
        for (int i = s.size() - 1; i >= 0; --i)
        {
            if (cnt % 4 == 0 && s[i] == '1')
                kq += 1;
            if (cnt % 4 == 1 && s[i] == '1')
                kq += 2;
            if (cnt % 4 == 2 && s[i] == '1')
                kq += 4;
            if (cnt % 4 == 3 && s[i] == '1')
                kq += 3;
            ++cnt;
        }
        if (kq % 5 == 0)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
    return 0;
}