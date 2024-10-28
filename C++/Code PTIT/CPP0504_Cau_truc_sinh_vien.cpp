#include <bits/stdc++.h>
#define fi first
#define se second
#define ms(a, n) memset(a, n, sizeof(a))
#define endl "\n"
using namespace std;

using ll = long long;

typedef pair<ll, ll> pl;
typedef vector<pl> vll;
typedef pair<int, int> pi;
typedef vector<pi> vii;

struct PhanSo
{
    ll ts, ms;
};
typedef struct ThiSinh ThiSinh;

void in(PhanSo p)
{
    cout << p.ts << "/" << p.ms;
}

void rutgon(PhanSo &p)
{
    ll x = p.ts, y = p.ms;
    p.ts = p.ts / __gcd(x, y);
    p.ms = p.ms / __gcd(x, y);
}

void nhap(PhanSo &p)
{
    cin >> p.ts >> p.ms;
}

int main()
{
    struct PhanSo p;
    nhap(p);
    rutgon(p);
    in(p);
    return 0;
}