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

int check(vector<int> a, vector<int> b, int n)
{
    for (int i = 1; i <= n; ++i)
    {
        if (a[i] != b[i] && a[i] != b[n - i + 1])
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
        vector<int> a(n + 1), b(n + 1);
        for (int i = 1; i <= n; ++i)
        {
            cin >> a[i];
            b[i] = a[i];
        }
        sort(b.begin() + 1, b.end());
        if (check(a, b, n))
            cout << "Yes\n";
        else
            cout << "No\n";
    }
    return 0;
}