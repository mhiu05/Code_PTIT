#include <bits/stdc++.h>
#define endl "\n"
#define second sc
#define first fi

using namespace std;

using ll = long long;

const int mod = 1e9 + 7;
const int MAXN = 1e6 + 1;

void faster()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

int n, k, X[1001], arr[1001], a[1001];
int m;
void init()
{
    cin >> n >> k;
    set<int> se;
    for (int i = 1; i <= n; ++i)
    {
        cin >> arr[i];
        se.insert(arr[i]);
    }
    for (int i = 1; i <= k; ++i)
    {
        X[i] = i;
    }
    int cnt = 1;
    for (int x : se)
    {
        a[cnt++] = x;
    }
    m = se.size();
}

void print()
{
    for (int i = 1; i <= k; ++i)
    {
        cout << a[X[i]] << " ";
    }
    cout << endl;
}

void Try(int j)
{
    for (int i = X[j - 1] + 1; i <= m - k + j; ++i)
    {
        X[j] = i;
        if (j == k)
        {
            print();
        }
        else
        {
            Try(j + 1);
        }
    }
}

int main()
{
    faster();
    init();
    Try(1);
    return 0;
}