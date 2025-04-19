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

struct SinhVien
{
    int stt;
    string msv, ten, lop;
    double d1, d2, d3;
};

int cmp(SinhVien a, SinhVien b)
{
    return a.msv < b.msv;
}

void nhap(SinhVien &a)
{
    cin.ignore();
    getline(cin, a.msv);
    getline(cin, a.ten);
    getline(cin, a.lop);
    cin >> a.d1 >> a.d2 >> a.d3;
}

void in_ds(SinhVien ds[], int n)
{
    for (int i = 0; i < n; ++i)
    {
        cout << ds[i].stt << " " << ds[i].msv << " " << ds[i].ten << " " << ds[i].lop << " ";
        cout << fixed << setprecision(1) << ds[i].d1 << " " << ds[i].d2 << " " << ds[i].d3 << endl;
    }
}

void sap_xep(SinhVien ds[], int n)
{
    sort(ds, ds + n, cmp);
    for (int i = 0; i < n; ++i)
    {
        ds[i].stt = i + 1;
    }
}

int main()
{
    int n;
    cin >> n;
    struct SinhVien *ds = new SinhVien[n];
    for (int i = 0; i < n; i++)
    {
        nhap(ds[i]);
    }
    sap_xep(ds, n);
    in_ds(ds, n);
    return 0;
}
