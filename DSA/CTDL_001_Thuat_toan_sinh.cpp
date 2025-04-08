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

int a[1005], n;

int check()
{
    for (int i = 1; i <= n; ++i)
    {
        if (a[i] != a[n - i + 1])
            return 0;
    }
    return 1;
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
                for (int k = 1; k <= n; ++k)
                {
                    cout << a[k] << " ";
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
    cin >> n;
    backtracking(1);
    return 0;
}