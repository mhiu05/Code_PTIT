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
    int n;
    cin >> n;
    int s[2][100000];
    memset(s, 0, sizeof(s));
    int min_val = 1e9;
    for (int i = 1; i <= n; ++i)
    {
        int x;
        cin >> x;
        min_val = min(min_val, x);
        s[0][1]++;
        s[1][1] += x;
        for (int j = 2; j <= x / 2; ++j)
        {
            if (x / j != x / (j - 1))
            {
                s[0][x / j]++;
                s[1][x / j] += j;
            }
        }
    }
    for (int i = min_val; i >= 1; --i)
    {
        if (s[0][i] == n)
        {
            cout << s[1][i];
            break;
        }
    }
    return 0;
}