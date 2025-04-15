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
        int n, k;
        cin >> n >> k;
        int a[n];
        for (int &x : a)
            cin >> x;
        int sum1 = 0, sum2 = 0;
        sort(a, a + n);
        if (k < n - k)
        {
            for (int i = 0; i < k; ++i)
            {
                sum1 += a[i];
            }
            for (int i = k; i < n; ++i)
            {
                sum2 += a[i];
            }
            cout << abs(sum2 - sum1) << endl;
        }
        else
        {
            for (int i = 0; i < n - k; ++i)
            {
                sum1 += a[i];
            }
            for (int i = n - k; i < n; ++i)
            {
                sum2 += a[i];
            }
            cout << abs(sum2 - sum1) << endl;
        }
    }
    return 0;
}