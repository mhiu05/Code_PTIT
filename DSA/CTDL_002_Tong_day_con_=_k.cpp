#include <bits/stdc++.h>
#define endl "\n"
#define second sc
#define first fi

using namespace std;

using ll = long long;

const int mod = 1e9 + 7;
const int MAXN = 1e6 + 1;

void faster()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

ll a[1005], b[1005], n, k, cnt = 0;

int check()
{
    ll sum = 0;
    for (int i = 1; i <= n; ++i)
    {
        if (a[i] == 1)
        {
            sum += b[i];
        }
    }
    if (sum == k)
        return 1;
    return 0;
}

void backtracking(int j)
{
    for (int i = 0; i <= 1; ++i)
    {
        a[j] = i;
        if (j == n)
        {
            if (check())
            {
                ++cnt;
                for (int k = 1; k <= n; ++k)
                {
                    if (a[k] == 1)
                        cout << b[k] << " ";
                }
                cout << endl;
            }
        }
        else
            backtracking(j + 1);
    }
}

int main()
{
    faster();
    cin >> n >> k;
    for (int i = 1; i <= n; ++i)
    {
        cin >> b[i];
    }
    backtracking(1);
    cout << cnt;
    return 0;
}