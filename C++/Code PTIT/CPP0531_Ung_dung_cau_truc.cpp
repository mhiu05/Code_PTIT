#include <bits/stdc++.h>
using namespace std;

void faster()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

using ll = long long;

const int mod = 1e9 + 7;

int main()
{
    faster();
    int T;
    cin >> T;
    while (T--)
    {
        int x1, y1, z1, x2, y2, z2, x3, y3, z3, x4, y4, z4;
        cin >> x1 >> y1 >> z1 >> x2 >> y2 >> z2 >> x3 >> y3 >> z3 >> x4 >> y4 >> z4;

        int V = (x2 - x1) * ((y3 - y1) * (z4 - z1) - (z3 - z1) * (y4 - y1)) -
                (y2 - y1) * ((x3 - x1) * (z4 - z1) - (z3 - z1) * (x4 - x1)) +
                (z2 - z1) * ((x3 - x1) * (y4 - y1) - (y3 - y1) * (x4 - x1));

        if (V == 0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}