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
    int a[n];
    vector<int> F(n, 1);
    for (int &x : a)
        cin >> x;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < i; ++j)
        {
            if (a[i] > a[j])
            {
                F[i] = max(F[i], F[j] + 1);
            }
        }
    }
    cout << *max_element(F.begin(), F.end());
    return 0;
}