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
    cin.ignore();
    map<string, int> mp;
    while (t--)
    {
        string s;
        getline(cin, s);
        stringstream ss(s);
        string tmp;
        vector<string> v;
        string email = "";
        while (ss >> tmp)
        {
            v.push_back(tmp);
        }
        for (int i = 0; i < v[v.size() - 1].size(); ++i)
        {
            v[v.size() - 1][i] = tolower(v[v.size() - 1][i]);
        }
        email += v[v.size() - 1];
        for (int i = 0; i < v.size() - 1; ++i)
        {
            v[i][0] = tolower(v[i][0]);
            email = email + v[i][0];
        }
        mp[email]++;
        if (mp[email] >= 2)
            cout << email << mp[email] << "@ptit.edu.vn" << endl;
        else
            cout << email << "@ptit.edu.vn" << endl;
    }
    return 0;
}