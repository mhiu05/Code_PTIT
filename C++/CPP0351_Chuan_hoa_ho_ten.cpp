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

string StandardlizedName1(string s)
{
    string name = "";
    stringstream ss(s);
    string tmp;
    vector<string> v;
    while (ss >> tmp)
    {
        v.push_back(tmp);
    }
    for (int i = 0; i < v[v.size() - 1].size(); ++i)
    {
        if (i == 0)
            v[v.size() - 1][i] = toupper(v[v.size() - 1][i]);
        else
            v[v.size() - 1][i] = tolower(v[v.size() - 1][i]);
    }
    name += v[v.size() - 1];
    name += " ";
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
        name += " ";
    }
    name.pop_back();
    return name;
}
string StandardlizedName2(string s)
{
    string name = "";
    stringstream ss(s);
    string tmp;
    vector<string> v;
    while (ss >> tmp)
    {
        v.push_back(tmp);
    }
    for (int i = 0; i < v.size(); ++i)
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
    for (int i = 1; i < v.size(); ++i)
    {
        name += v[i];
        name += " ";
    }
    name += v[0];
    return name;
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
        int n;
        cin >> n;
        cin.ignore();
        if (n == 1)
        {
            string s;
            getline(cin, s);
            cout << StandardlizedName1(s) << endl;
        }
        else
        {
            string s;
            getline(cin, s);
            cout << StandardlizedName2(s) << endl;
        }
    }
    return 0;
}