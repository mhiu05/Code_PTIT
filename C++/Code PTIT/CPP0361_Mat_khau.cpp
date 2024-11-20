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
const int MAXN = 1e5 + 5;

int main()
{
    faster();
    int n;
    cin >> n;
    vector<string> v;
    for (int i = 1; i <= n; ++i)
    {
        string x;
        cin >> x;
        v.push_back(x);
    }

    int cnt = 0;
    for (int i = 0; i < v.size(); ++i)
    {
        for (int j = 0; j < v.size(); ++j)
        {
            if (i != j)
            {
                if (v[i].find(v[j]) != string::npos)
                    ++cnt;
            }
        }
    }
    cout << cnt;
    return 0;
}