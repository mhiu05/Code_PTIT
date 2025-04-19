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

int Find(char c, string tmp)
{
    for (int i = 0; i < tmp.size(); ++i)
    {
        if (c == tmp[i])
            return 1;
    }
    return 0;
}
int check(string s)
{
    for (int i = 0; i < s.size(); ++i)
    {
        if (s[i] != s[s.size() - 1 - i])
            return 0;
    }
    return 1;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string _2 = "abc", _3 = "def", _4 = "ghi", _5 = "jkl", _6 = "mno", _7 = "pqrs", _8 = "tuv", _9 = "wxyz";
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        for (int i = 0; i < s.size(); ++i)
        {
            s[i] = tolower(s[i]);
        }
        string tmp = "";
        for (int i = 0; i < s.size(); ++i)
        {
            if (Find(s[i], _2))
                tmp += "2";
            else if (Find(s[i], _3))
                tmp += "3";
            else if (Find(s[i], _4))
                tmp += "4";
            else if (Find(s[i], _5))
                tmp += "5";
            else if (Find(s[i], _6))
                tmp += "6";
            else if (Find(s[i], _7))
                tmp += "7";
            else if (Find(s[i], _8))
                tmp += "8";
            else
                tmp += "9";
        }
        if (check(tmp))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}