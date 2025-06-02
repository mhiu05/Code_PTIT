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
        int n;
        cin >> n;
        int b = -1;
        for (int i = 0; i <= n / 7; ++i)
        {
            if ((n - 7 * i) % 4 == 0)
            {
                b = i;
            }
        }
        if (b == -1)
            cout << -1 << endl;
        else
        {
            int a = (n - 7 * b) / 4;
            for (int i = 1; i <= a; ++i)
                cout << 4;
            for (int i = 1; i <= b; ++i)
                cout << 7;
        }
        cout << endl;
    }
    return 0;
}