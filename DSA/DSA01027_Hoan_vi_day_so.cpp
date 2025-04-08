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

int n, a[11], arr[11];

int visited[11];

void init()
{
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        a[i] = i;
        cin >> arr[i];
    }
    sort(arr + 1, arr + n + 1);
}

void solve()
{
    for (int i = 1; i <= n; ++i)
    {
        cout << arr[a[i]] << " ";
    }
    cout << endl;
}

void Try(int j)
{
    for (int i = 1; i <= n; ++i)
    {
        if (!visited[i])
        {
            visited[i] = 1;
            a[j] = i;
            if (j == n)
            {
                solve();
            }
            else
                Try(j + 1);
            visited[i] = 0;
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