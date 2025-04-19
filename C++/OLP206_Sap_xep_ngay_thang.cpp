#include <bits/stdc++.h>
#define fi first
#define sc second
#define endl "\n"
using namespace std;

void faster()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

using ll = long long;

const int mod = 1e9 + 7;
const int MAXN = 100005;

void standardize(string &s)
{
    if (s[2] != '/')
        s = "0" + s;
    if (s[5] != '/')
        s.insert(3, "0");
}

int cmp(string a, string b)
{
    string da = a.substr(0, 2);
    string ma = a.substr(3, 2);
    string ya = a.substr(6, 4);
    string db = b.substr(0, 2);
    string mb = b.substr(3, 2);
    string yb = b.substr(6, 4);
    if (ya != yb)
        return ya < yb;
    if (ma != mb)
        return ma < mb;
    return da < db;
}

int main()
{
    faster();
    int n;
    cin >> n;
    vector<string> v(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
        standardize(v[i]);
    }
    sort(v.begin(), v.end(), cmp);
    for (string x : v)
        cout << x << endl;
    return 0;
}