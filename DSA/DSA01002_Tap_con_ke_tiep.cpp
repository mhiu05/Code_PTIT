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

int a[1001], n, k;

void sinh()
{
    int i = k;
    while (i > 0 && a[i] == n - k + i)
    {
        --i;
    }
    if (i == 0)
    {
        for (int m = 1; m <= k; ++m)
        {
            cout << m << " ";
        }
        cout << endl;
    }
    else
    {
        a[i]++;
        for (int j = i + 1; j <= k; ++j)
        {
            a[j] = a[j - 1] + 1;
        }
        for (int m = 1; m <= k; ++m)
        {
            cout << a[m] << " ";
        }
        cout << endl;
    }
}

int main()
{
    faster();
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        for (int i = 1; i <= k; ++i)
        {
            a[i] = i;
        }
        sinh();
    }
    return 0;
}