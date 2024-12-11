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

class Subject
{
public:
    string id, name, format;
    friend istream &operator>>(istream &in, Subject &a)
    {
        getline(in, a.id);
        getline(in, a.name);
        getline(in, a.format);
        return in;
    }
};

void output(Subject a)
{
    cout << a.id << " " << a.name << " " << a.format << endl;
}

int cmp(Subject a, Subject b)
{
    return a.id < b.id;
}

int main()
{
    faster();
    ifstream in;
    in.open("MONHOC.in");
    int n;
    in >> n;
    in.ignore();
    Subject s[n];
    for (int i = 0; i < n; ++i)
    {
        in >> s[i];
    };
    sort(s, s + n, cmp);
    for (int i = 0; i < n; ++i)
    {
        output(s[i]);
    }
    return 0;
}