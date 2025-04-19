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

int check(string s, int k)
{
    map<char, int> mp;
    for (char x : s)
        mp[x]++;
    if (s.size() < 26)
        return 0;
    if (mp.size() + k < 26)
        return 0;
    return 1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string s;
    getline(cin, s);
    stringstream ss(s);
    string tmp;
    string k;
    cin >> k;
    while (ss >> tmp)
    {
        if (tmp == k)
            continue;
        else
            cout << tmp << " ";
    }
    return 0;
}