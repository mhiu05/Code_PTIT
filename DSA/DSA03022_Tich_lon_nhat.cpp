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

int main()
{
    faster();
    int n;
    cin >> n;
    vector<int> a(n);
    for (int &x : a)
        cin >> x;
    sort(a.begin(), a.end());
    cout << max({a[0] * a[1], a[a.size() - 1] * a[a.size() - 2], a[0] * a[1] * a[a.size() - 1], a[a.size() - 1] * a[a.size() - 2] * a[a.size() - 3]});
    return 0;
}