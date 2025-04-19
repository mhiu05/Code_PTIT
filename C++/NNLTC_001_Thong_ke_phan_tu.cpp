#include <bits/stdc++.h>
#define fi first
#define sc second
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

int main()
{
    faster();
    int n;
    int a[10005], i = 0;
    map<int, int> mp;
    while (cin >> n)
    {
        a[i++] = n;
        mp[n]++;
    }
    for (int j = 0; j < i; ++j)
    {
        if (mp[a[j]])
        {
            cout << a[j] << " " << mp[a[j]] << endl;
            mp[a[j]] = 0;
        }
    }
    return 0;
}