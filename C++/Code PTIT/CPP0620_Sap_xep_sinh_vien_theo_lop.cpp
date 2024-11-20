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
int cnt = 0;
int dem = 0;
class NhanVien
{
private:
    string msv, ten, lop, email;

public:
    friend istream &operator>>(istream &in, NhanVien &a)
    {
        if (cnt == dem)
        {
            scanf("\n");
            ++dem;
        }
        getline(in, a.msv);
        getline(in, a.ten);
        getline(in, a.lop);
        getline(in, a.email);
        return in;
    }

    friend ostream &operator<<(ostream &out, NhanVien &a)
    {
        out << a.msv << " " << a.ten << " " << a.lop << " " << a.email << endl;
        return out;
    }
    string GetLop()
    {
        return lop;
    }
    string GetMsv()
    {
        return msv;
    }
};
int cmp(NhanVien a, NhanVien b)
{
    if (a.GetLop() != b.GetLop())
        return a.GetLop() < b.GetLop();
    return a.GetMsv() < b.GetMsv();
}
void sapxep(NhanVien ds[], int N)
{
    sort(ds, ds + N, cmp);
}
int main()
{
    NhanVien ds[1005];
    int N, i;
    cin >> N;
    for (i = 0; i < N; i++)
        cin >> ds[i];
    sapxep(ds, N);
    for (i = 0; i < N; i++)
        cout << ds[i];
    return 0;
}