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

int solve(int a[], int n)
{
    vector<int> F(n, 1);
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < i; ++j)
        {
            if (a[i] >= a[j])
            {
                F[i] = max(F[i], F[j] + 1);
            }
        }
    }
    return n - *max_element(F.begin(), F.end());
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
        cout << solve(a, n) << endl;
    }
    return 0;
}