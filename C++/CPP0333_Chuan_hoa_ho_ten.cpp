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

string StandardlizedName(string s)
{
    string name = "";
    vector<string> v;
    stringstream ss(s);
    string tmp;
    while (ss >> tmp)
    {
        v.push_back(tmp);
    }
    for (int i = 0; i < v.size() - 1; ++i)
    {
        for (int j = 0; j < v[i].size(); ++j)
        {
            if (j == 0)
            {
                v[i][j] = toupper(v[i][j]);
            }
            else
            {
                v[i][j] = tolower(v[i][j]);
            }
        }
    }
    for (int i = 0; i < v.size() - 1; ++i)
    {
        name += v[i];
        if (i != v.size() - 2)
        {
            name = name + ' ';
        }
        else
            name = name + ", ";
    }
    for (int i = 0; i < v[v.size() - 1].size(); ++i)
    {
        v[v.size() - 1][i] = toupper(v[v.size() - 1][i]);
    }
    name += v[v.size() - 1];
    return name;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string s;
    getline(cin, s);
    cout << StandardlizedName(s);
    return 0;
}