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
void nhap(PhanSo &a)
{
    cin >> a.ts >> a.ms;
}
PhanSo tong(PhanSo p, PhanSo q)
{
    PhanSo t;
    t.ts = p.ms * q.ts + p.ts * q.ms;
    t.ms = p.ms * q.ms;
    return t;
}
void in(PhanSo t)
{
    cout << t.ts / __gcd(t.ts, t.ms) << "/" << t.ms / __gcd(t.ts, t.ms);
}
int main()
{
    struct PhanSo p, q;
    nhap(p);
    nhap(q);
    PhanSo t = tong(p, q);
    in(t);
    return 0;
}