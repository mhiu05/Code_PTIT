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
    in.open("DATA.in");
    int tmp;
    map<int, int> mp;
    while (in >> tmp)
    {
        mp[tmp]++;
    }
    for (auto it : mp)
    {
        cout << it.first << " " << it.second << endl;
    }
    in.close();
    return 0;
}