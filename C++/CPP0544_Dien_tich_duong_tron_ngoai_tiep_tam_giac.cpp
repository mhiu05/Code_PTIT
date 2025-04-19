#include <bits/stdc++.h>
#define fi first
#define se second
#define ms(a, n) memset(a, n, sizeof(a))
#define endl "\n"
#define PI 3.141592653589793238
using namespace std;

using ll = long long;

typedef pair<ll, ll> pl;
typedef vector<pl> vll;
typedef pair<int, int> pi;
typedef vector<pi> vii;

const int modi = 1000000007;
const ll modl = 1e18 + 7;
int check(double x, double y, double z)
{
    if (x + y > z && y + z > x && x + z > y)
        return 1;
    return 0;
}

double solve(double x, double y, double z)
{
    double S = sqrt((x + y + z) * (x + y - z) * (y + z - x) * (z + x - y)) / 4;
    double R = x * y * z / (4 * S);
    return PI * R * R;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        double a1, a2, b1, b2, c1, c2;
        cin >> a1 >> a2 >> b1 >> b2 >> c1 >> c2;
        double x = sqrt((b1 - a1) * (b1 - a1) + (b2 - a2) * (b2 - a2));
        double y = sqrt((c1 - a1) * (c1 - a1) + (c2 - a2) * (c2 - a2));
        double z = sqrt((c1 - b1) * (c1 - b1) + (c2 - b2) * (c2 - b2));
        if (!check(x, y, z))
            cout << "INVALID\n";
        else
            cout << fixed << setprecision(3) << solve(x, y, z) << endl;
    }
    return 0;
}