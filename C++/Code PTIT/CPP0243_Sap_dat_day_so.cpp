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
    int t;
    cin >> t;
    while (t--)
    {
        int cnt1[MAXN] = {0};
        int n, m;
        cin >> n >> m;
        vector<int> v1(n), v2(m);
        for (int &x : v1)
        {
            cin >> x;
            cnt1[x]++;
        }
        for (int &x : v2)
        {
            cin >> x;
        }
        for (int i = 0; i < m; ++i)
        {
            if (cnt1[v2[i]])
            {
                for (int j = 1; j <= cnt1[v2[i]]; ++j)
                {
                    cout << v2[i] << " ";
                }
                cnt1[v2[i]] = 0;
            }
        }
        for (int i = 1; i < MAXN; ++i)
        {
            if (cnt1[i])
                for (int j = 1; j <= cnt1[i]; ++j)
                    cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}