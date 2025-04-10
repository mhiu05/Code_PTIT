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

int count(int n)
{
    int a[10] = {1000, 500, 200, 100, 50, 20, 10, 5, 2, 1};
    int cnt = 0;

    for (int i = 0; i < 10; ++i)
    {
        cnt += (n / a[i]);
        n = n - a[i] * (n / a[i]);
    }
    return cnt;
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
        cout << count(n) << endl;
    }
    return 0;
}