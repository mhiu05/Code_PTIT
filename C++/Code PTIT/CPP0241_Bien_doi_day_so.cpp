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

int check(int a[], int n)
{
    for (int i = 0; i < n; ++i)
    {
        if (a[i] != a[n - i - 1])
            return 0;
    }
    return 1;
}

int main()
{
    faster();
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int &x : a)
            cin >> x;
        int i = 0, j = n - 1, cnt = 0;
        while (i <= j)
        {
            if (a[i] == a[j])
            {
                ++i;
                --j;
            }
            else if (a[i] < a[j])
            {
                a[i + 1] = a[i] + a[i + 1];
                ++i;
                ++cnt;
            }
            else
            {
                a[j - 1] = a[j - 1] + a[j];
                --j;
                ++cnt;
            }
            // cout << i << " " << j << endl;
        }
        cout << cnt << endl;
    }
    return 0;
}