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
    set<string> se;
    set<string> se1;
    set<string> se2;
    ifstream in1;
    in1.open("DATA1.in");
    string tmp;
    while (in1 >> tmp)
    {
        tmp = convert_to_lower(tmp);
        se.insert(tmp);
        se1.insert(tmp);
    }
    in1.close();
    ifstream in2;
    in2.open("DATA2.in");
    while (in2 >> tmp)
    {
        tmp = convert_to_lower(tmp);
        se.insert(tmp);
        se2.insert(tmp);
    }
    in2.close();
    for (string x : se)
        cout << x << " ";
    cout << endl;
    for (string x : se1)
    {
        if (se2.count(x))
            cout << x << " ";
    }

    return 0;
}