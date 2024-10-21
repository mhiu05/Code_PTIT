#include <bits/stdc++.h>
#define fi first
#define se second
#define ms(a, n) memset(a, n, sizeof(a))
#define endl "\n"
#define PI 3.141592653589793238
using namespace std;

using ll = long long;

typedef pair<ll, ll> pl;
typedef vector<pl> vll;
typedef pair<int, int> pi;
typedef vector<pi> vii;

const int modi = 1000000007;
const ll modl = 1e18 + 7;

string solve(string a, string b)
{
    int n = max(a.size(), b.size());
    while (a.size() < n)
    {
        a = "0" + a;
    }
    while (b.size() < n)
    {
        b = "0" + b;
    }
    if (a < b)
    {
        swap(a, b);
    }
    string res = "";
    int remember = 0;
    for (int i = n - 1; i >= 0; --i)
    {
        int tmp = (a[i] - '0') - (b[i] - '0') - remember;
        if (tmp < 0)
        {
            remember = 1;
            tmp += 10;
        }
        else
        {
            remember = 0;
        }
        res = char(tmp + '0') + res;
    }
    return res;
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
        string a, b;
        cin >> a >> b;
        cout << solve(a, b) << endl;
    }
    return 0;
}