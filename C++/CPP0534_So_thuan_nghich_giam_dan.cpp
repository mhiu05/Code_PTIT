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
    for (int i = 0; i < s.size(); ++i)
    {
        if (s[i] != s[s.size() - i - 1])
            return 0;
    }
    return 1;
}
map<string, int> mp;
int cmp(string a, string b)
{
    if (a.size() != b.size())
        return a.size() > b.size();
    return a > b;
}
int main()
{
    string s;
    vector<string> v;
    int k = 0;
    while (cin >> s)
    {
        if (check(s) && s.size() != 1)
        {
            v.push_back(s);
            mp[s]++;
        }
    }
    sort(v.begin(), v.end(), cmp);
    for (int i = 0; i < v.size(); ++i)
    {
        if (mp[v[i]])
        {
            cout << v[i] << " " << mp[v[i]] << endl;
            mp[v[i]] = 0;
        }
    }
    return 0;
}