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

int X[1001], n, k, ok;
void sinh()
{
    int i = k;
    while (i > 0 && X[i] == n - k + i)
    {
        --i;
    }
    if (i == 0)
        ok = 0;
    else
    {
        X[i]++;
        for (int j = i + 1; j <= k; ++j)
        {
            X[j] = X[j - 1] + 1;
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
        cin >> n >> k;
        for (int i = 1; i <= k; ++i)
        {
            X[i] = i;
        }
        ok = 1;
        while (ok)
        {
            for (int i = 1; i <= k; ++i)
            {
                cout << X[i];
            }
            cout << " ";
            sinh();
        }
        cout << endl;
    }
    return 0;
}