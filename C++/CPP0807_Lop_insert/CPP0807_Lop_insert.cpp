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
    int n, m;
    in >> n >> m;
    set<int> se1, se2;
    vector<int> v1(n), v2(m);
    for (int i = 0; i < n; ++i)
    {
        in >> v1[i];
        se1.insert(v1[i]);
    }
    for (int i = 0; i < m; ++i)
    {
        in >> v2[i];
        se2.insert(v2[i]);
    }
    for (int x : se1)
    {
        if (se2.count(x))
            cout << x << " ";
    }
    in.close();
    return 0;
}