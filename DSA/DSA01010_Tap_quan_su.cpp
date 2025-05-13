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

int n, k;
vector<int> a(50), b(50);
int ok;

void init()
{
    ok = 1;
    cin >> n >> k;
    for (int i = 1; i <= k; ++i)
    {
        cin >> b[i];
    }
    for (int i = 1; i <= k; ++i)
    {
        a[i] = i;
    }
}

void sinh()
{
    int i = k;
    while (i > 0 && a[i] == n - k + i)
        --i;
    if (i == 0)
    {
        ok = 0;
    }
    else
    {
        a[i]++;
        for (int j = i + 1; j <= k; ++j)
        {
            a[j] = a[j - 1] + 1;
        }
    }
}

int check()
{
    for (int i = 1; i <= k; ++i)
    {
        if (a[i] != b[i])
            return 0;
    }
    return 1;
}

int check_last()
{
    for (int i = 1; i <= k; ++i)
    {
        if (b[i] != n - k + i)
            return 0;
    }
    return 1;
}

int solve()
{
    int cnt = 0;
    set<int> sea, seb;
    for (int i = 1; i <= k; ++i)
    {
        sea.insert(a[i]);
        seb.insert(b[i]);
    }
    for (int x : seb)
    {
        if (sea.count(x) == 0)
            ++cnt;
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
        init();
        if (check_last())
        {
            cout << k << endl;
            continue;
        }
        while (ok)
        {
            if (check())
                break;
            sinh();
        }
        sinh();

        cout << solve() << endl;
    }
    return 0;
}