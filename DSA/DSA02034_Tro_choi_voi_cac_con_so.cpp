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

int n;
int vs[10];
int a[10];

int check()
{
    for (int i = 2; i <= n; ++i)
    {
        if (abs(a[i] - a[i - 1]) == 1)
            return 0;
    }
    return 1;
}

void backtrack(int j)
{
    for (int i = 1; i <= n; ++i)
    {
        if (!vs[i])
        {
            a[j] = i;
            vs[i] = 1;
            if (j == n)
            {
                if (check())
                {
                    for (int i = 1; i <= n; ++i)
                    {
                        cout << a[i];
                    }
                    cout << endl;
                }
            }
            else
                backtrack(j + 1);
            vs[i] = 0;
        }
    }
}

int main()
{
    faster();
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        backtrack(1);
    }
    return 0;
}