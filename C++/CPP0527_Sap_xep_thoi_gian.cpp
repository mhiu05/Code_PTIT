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

struct tg
{
    int h, m, s;
    friend istream &operator>>(istream &in, tg &a)
    {
        in >> a.h >> a.m >> a.s;
        return in;
    }
    friend ostream &operator<<(ostream &out, tg a)
    {
        out << a.h << " " << a.m << " " << a.s << endl;
        return out;
    }
};

bool cmp(tg a, tg b)
{
    if (a.h != b.h)
        return a.h < b.h;
    if (a.m != b.m)
        return a.m < b.m;
    return a.s < b.s;
}

int main()
{

    int n;
    cin >> n;
    tg a[n];
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    sort(a, a + n, cmp);
    for (int i = 0; i < n; ++i)
        cout << a[i];
    return 0;
}