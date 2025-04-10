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

int check(int a[], int n)
{
    for (int i = 0; i < n; ++i)
    {
        if (a[i] >= 0)
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
        if (check(a, n))
            cout << *max_element(a, a + n) << endl;
        else
        {
            int max_sum = 0, sum = 0;
            for (int i = 0; i < n; ++i)
            {
                sum += a[i];
                if (sum <= 0)
                    sum = 0;
                else
                    max_sum = max(max_sum, sum);
            }
            cout << max_sum << endl;
        }
    }
    return 0;
}