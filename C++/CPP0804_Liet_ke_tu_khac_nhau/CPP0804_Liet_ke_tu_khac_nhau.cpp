#include <bits/stdc++.h>
using namespace std;

void faster()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

using ll = long long;

const int mod = 1e9 + 7;

string convert_to_lower(string s)
{
    for (int i = 0; i < s.size(); ++i)
    {
        s[i] = tolower(s[i]);
    }
    return s;
}

int main()
{
    faster();
    ifstream in;
    in.open("VANBAN.in");
    set<string> se;
    string tmp;
    while (in >> tmp)
    {
        tmp = convert_to_lower(tmp);
        se.insert(tmp);
    }
    for (string x : se)
        cout << x << endl;
    in.close();
    return 0;
}