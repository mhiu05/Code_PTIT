#include <bits/stdc++.h>

using namespace std;

using ll = long long;

const int mod = 1e9 + 7;

void faster()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

struct Cv
{
    double x1, y1, x2, y2, x3, y3;
    friend istream &operator>>(istream &in, Cv &a)
    {
        in >> a.x1 >> a.y1 >> a.x2 >> a.y2 >> a.x3 >> a.y3;
        return in;
    }
};

void check(Cv a)
{
    double x = sqrt((a.x1 - a.x2) * (a.x1 - a.x2) + (a.y1 - a.y2) * (a.y1 - a.y2));
    double y = sqrt((a.x1 - a.x3) * (a.x1 - a.x3) + (a.y1 - a.y3) * (a.y1 - a.y3));
    double z = sqrt((a.x3 - a.x2) * (a.x3 - a.x2) + (a.y3 - a.y2) * (a.y3 - a.y2));
    if (x + y <= z || y + z <= x || x + z <= y)
    {
        cout << "INVALID" << endl;
    }
    else
    {
        cout << fixed << setprecision(3) << x + y + z << endl;
    }
}

int main()
{
    faster();
    int n;
    cin >> n;
    Cv a[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; ++i)
    {
        check(a[i]);
    }
    return 0;
}