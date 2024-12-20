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
        ll F[n];
        for (int i = 0; i < n; ++i)
        {
            F[i] = a[i];
            for (int j = 0; j < i; ++j)
            {
                if (a[i] > a[j])
                {
                    F[i] = max(F[i], F[j] + a[i]);
                }
            }
        }
        cout << *max_element(F, F + n) << endl;
        ;
    }
    return 0;
}