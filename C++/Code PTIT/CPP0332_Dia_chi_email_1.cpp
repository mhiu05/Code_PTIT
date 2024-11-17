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

string StandardlizedEmail(string s)
{
    string email = "";
    vector<string> v;
    stringstream ss(s);
    string tmp;
    while (ss >> tmp)
    {
        v.push_back(tmp);
    }
    email += v[v.size() - 1];
    for (int i = 0; i < v.size() - 1; ++i)
    {
        email = email + v[i][0];
    }
    email += "@ptit.edu.vn";
    for (int i = 0; i < email.size(); ++i)
    {
        email[i] = tolower(email[i]);
    }
    return email;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string s;
    getline(cin, s);
    cout << StandardlizedEmail(s);
    return 0;
}