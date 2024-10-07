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

int main()
{
    faster();
    ifstream in;
    in.open("PTIT.in");
    ofstream out;
    out.open("PTIT.out");

    string s;
    while (getline(in, s))
    {
        out << s << endl;
    }
    in.close();
    out.close();
    return 0;
}