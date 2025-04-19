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
const int MAXN = 1e6 + 5;

int cnt[MAXN];

bool cmp(int a, int b)
{
    if (cnt[a] != cnt[b])
        return cnt[a] > cnt[b];
    return a < b;
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
        {
            cin >> x;
            cnt[x]++;
        }
        sort(a, a + n, cmp);
        for (int x : a)
        {
            cout << x << " ";
        }
        cout << endl;
        fill(cnt, cnt + MAXN, 0);
    }
    return 0;
}