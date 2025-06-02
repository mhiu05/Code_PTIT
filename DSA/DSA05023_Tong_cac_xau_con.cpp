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
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        ll sum = 0;
        int n = s.size();
        for (int i = 1; i <= n; ++i)
        {
            for (int j = 0; j <= s.size() - i; ++j)
            {
                sum += stol(s.substr(j, i));
            }
        }
        cout << sum << endl;
    }
    return 0;
}