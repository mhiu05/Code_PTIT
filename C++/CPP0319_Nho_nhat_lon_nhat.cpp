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

string FindMaxNumber(int m, int s)
{
    if (s == 0 && m == 1)
        return "0";
    if (s == 0 || 9 * m < s)
        return "-1";
    string tmp = "";
    while (s >= 9)
    {
        tmp = tmp + "9";
        s -= 9;
    }
    if (s != 0)
        tmp += to_string(s);
    while (tmp.size() < m)
    {
        tmp = tmp + "0";
    }
    return tmp;
}
string FindMinNumber(int m, int s)
{
    if (s == 0 && m == 1)
        return "0";
    if (s == 0 || 9 * m < s)
        return "-1";
    string tmp(m, '0');
    s -= 1;
    for (int i = m - 1; i > 0; --i)
    {
        if (s > 9)
        {
            tmp[i] = '9';
            s -= 9;
        }
        else
        {
            tmp[i] = s + '0';
            s = 0;
        }
    }
    tmp[0] = '1' + s;
    return tmp;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int m, s;
    cin >> m >> s;
    cout << FindMinNumber(m, s) << " " << FindMaxNumber(m, s);
    return 0;
}