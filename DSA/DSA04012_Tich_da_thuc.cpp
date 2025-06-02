#include <bits/stdc++.h>
#define endl "\n"

using namespace std;

void faster()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

using ll = long long;

const int mod = 1e9 + 7;
const int MAXN = 100005;

int main()
{
    faster();
    int t;
    cin >> t;
    while (t--)
    {
        int m, n;
        cin >> m >> n;
        map<int, int> mpP, mpQ, mp;
        for (int i = 0; i <= m - 1; ++i)
        {
            int x;
            cin >> x;
            mpP[i] = x;
        }
        for (int i = 0; i <= n - 1; ++i)
        {
            int x;
            cin >> x;
            mpQ[i] = x;
        }
        for (int i = 0; i < m; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                mp[i + j] += mpP[i] * mpQ[j];
            }
        }
        for (int i = 0; i <= m + n - 2; ++i)
        {
            cout << mp[i] << " ";
        }
        cout << endl;
    }
    return 0;
}