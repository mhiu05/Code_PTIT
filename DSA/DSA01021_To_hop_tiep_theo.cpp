#include <bits/stdc++.h>
#define endl "\n"

using namespace std;

void faster()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

int a[1001], n, k, X[1001];
int check;

void sinh()
{
    int i = k;
    while (i > 0 && a[i] == n - k + i)
    {
        --i;
    }
    if (i == 0)
    {
        check = 1;
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

int number()
{
    int cnt = 0;
    set<int> se;
    for (int i = 1; i <= k; ++i)
    {
        se.insert(X[i]);
    }
    for (int i = 1; i <= k; ++i)
    {
        if (se.count(a[i]))
            ++cnt;
    }
    return k - cnt;
}

int main()
{
    faster();
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        check = 0;
        for (int i = 1; i <= k; ++i)
        {
            cin >> a[i];
            X[i] = a[i];
        }
        sinh();
        if (!check)
            cout << number() << endl;
        else
            cout << k << endl;
    }
    return 0;
}