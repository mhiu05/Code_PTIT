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

struct PhanSo
{
    ll tu, mau;
};
typedef struct PhanSo PhanSo;

void process(PhanSo A, PhanSo B)
{
    PhanSo C;
    ll x = (A.tu * B.mau + A.mau * B.tu) * (A.tu * B.mau + A.mau * B.tu);
    ll y = (A.mau * B.mau) * (A.mau * B.mau);
    C.tu = x / __gcd(x, y);
    C.mau = y / __gcd(x, y);
    cout << C.tu << "/" << C.mau << " ";
    ll tmp1 = A.tu * B.tu * C.tu;
    ll tmp2 = A.mau * B.mau * C.mau;
    PhanSo D;
    D.tu = tmp1 / __gcd(tmp1, tmp2);
    D.mau = tmp2 / __gcd(tmp1, tmp2);
    cout << D.tu << "/" << D.mau << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        PhanSo A;
        PhanSo B;
        cin >> A.tu >> A.mau >> B.tu >> B.mau;
        process(A, B);
    }
}
