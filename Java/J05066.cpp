#include <bits/stdc++.h>

using namespace std;

using ll = long long;

const int mod = 1e9 + 7;

void faster()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

class Nv
{
public:
    string id, name;
    Nv() {};
    Nv(string id, string name)
    {
        this->id = id;
        this->name = name;
    }
};

int check(string s, string t)
{
    string tmp1 = s;
    string tmp2 = t;
    for (int i = 0; i < tmp1.size(); ++i)
    {
        tmp1[i] = tolower(tmp1[i]);
    }
    for (int i = 0; i < tmp2.size() - tmp1.size() + 1; ++i)
    {
        if (tmp2.substr(i, tmp1.size()) == tmp1)
            return 1;
    }
    return 0;
}

int main()
{
    faster();
    int n;
    cin >> n;
    cin.ignore();
    Nv a[n];
    for (int i = 0; i < n; ++i)
    {
        string tmp;
        getline(cin, tmp);
        string id = tmp.substr(0, 7);
        string name = tmp.substr(8);
        a[i] = Nv(id, name);
    }
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        for (int i = 0; i < n; ++i)
        {
            s[i] = tolower(s[i]);
        }
        for (int i = 0; i < n; ++i)
        {
            if (check(s, a[i].name))
            {
                cout << a[i].name << " " << a[i].id.substr(4) << " " << a[i].id.substr(2, 2) << endl;
            }
        }
        cout << endl;
    }
    return 0;
}