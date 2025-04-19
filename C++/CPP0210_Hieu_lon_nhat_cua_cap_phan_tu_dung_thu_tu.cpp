#include <bits/stdc++.h>
#define fi first
#define se second
#define ms(a, n) memset(a, n, sizeof(a))
#define endl "\n"
using namespace std;

using ll = long long;

typedef pair<ll, ll> pl;
typedef vector<pl> vll;
typedef pair<int, int> pi;
typedef vector<pi> vii;

int check(int a[], int n)
{
    for (int i = 1; i < n; ++i)
    {
        if (a[i] > a[i - 1])
            return 0;
    }
    return 1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

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
            cout << -1 << endl;
        else
        {
            int kq = INT_MIN;
            for (int i = 0; i < n - 1; ++i)
            {
                for (int j = i + 1; j < n; ++j)
                {
                    if (a[j] > a[i])
                    {
                        kq = max(kq, a[j] - a[i]);
                    }
                }
            }
            cout << kq << endl;
        }
    }
    return 0;
}