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

ll merge(ll a[], int l, int m, int r)
{
    vector<int> x(a + l, a + m + 1);
    vector<int> y(a + m + 1, a + r + 1);
    int i = 0, j = 0;
    int k = l;
    ll cnt = 0;
    while (i < x.size() && j < y.size())
    {
        if (x[i] <= y[j])
        {
            a[k++] = x[i++];
        }
        else
        {
            cnt += x.size() - i;
            a[k++] = y[j++];
        }
    }
    while (i < x.size())
    {
        a[k++] = x[i++];
    }
    while (j < y.size())
    {
        a[k++] = y[j++];
    }
    return cnt;
}

ll mergeSort(ll a[], int l, int r)
{
    ll cnt = 0;
    if (l < r)
    {
        int m = (l + r) / 2;
        cnt += mergeSort(a, l, m);
        cnt += mergeSort(a, m + 1, r);
        cnt += merge(a, l, m, r);
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
        ll a[n];
        for (ll &x : a)
            cin >> x;
        cout << mergeSort(a, 0, n - 1) << endl;
    }
    return 0;
}