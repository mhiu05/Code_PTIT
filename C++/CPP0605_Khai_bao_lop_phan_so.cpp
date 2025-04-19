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

const int modi = 1000000007;
const ll modl = 1e18 + 7;

class PhanSo
{
private:
    ll ts, ms;

public:
    PhanSo(ll ts, ll ms)
    {
        this->ts = ts;
        this->ms = ms;
    }
    friend ostream &operator<<(ostream &out, PhanSo a)
    {
        out << a.ts << "/" << a.ms;
        return out;
    }
    void rutgon()
    {
        ll x = ts, y = ms;
        ts = ts / __gcd(x, y);
        ms = ms / __gcd(x, y);
    }
    friend istream &operator>>(istream &in, PhanSo &a)
    {
        in >> a.ts >> a.ms;
        return in;
    }
};

int main()
{
    PhanSo p(1, 1);
    cin >> p;
    p.rutgon();
    cout << p;
    return 0;
}