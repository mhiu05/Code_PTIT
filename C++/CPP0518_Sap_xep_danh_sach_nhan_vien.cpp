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

struct NhanVien
{
    string mnv, name, gender, birthday, address, mst, day;
};
int check = 1;
void nhap(NhanVien &a)
{
    if (check)
    {
        cin.ignore();
        check = 0;
    }
    getline(cin, a.name);
    getline(cin, a.gender);
    getline(cin, a.birthday);
    getline(cin, a.address);
    getline(cin, a.mst);
    getline(cin, a.day);
}
int cmp(NhanVien a, NhanVien b)
{
    int ma = (a.birthday[0] - '0') * 10 + (a.birthday[1] - '0');
    int da = (a.birthday[3] - '0') * 10 + (a.birthday[4] - '0');
    int ya = (a.birthday[6] - '0') * 1000 + (a.birthday[7] - '0') * 100 + (a.birthday[8] - '0') * 10 + (a.birthday[9] - '0');
    int mb = (b.birthday[0] - '0') * 10 + (b.birthday[1] - '0');
    int db = (b.birthday[3] - '0') * 10 + (b.birthday[4] - '0');
    int yb = (b.birthday[6] - '0') * 1000 + (b.birthday[7] - '0') * 100 + (b.birthday[8] - '0') * 10 + (b.birthday[9] - '0');
    if (yb != ya)
        return ya < yb;
    if (ma != mb)
        return ma < mb;
    return da < db;
}
void sapxep(NhanVien ds[], int N)
{
    for (int i = 0; i < N; ++i)
    {
        string tmp = to_string(i + 1);
        while (tmp.size() < 5)
        {
            tmp = "0" + tmp;
        }
        ds[i].mnv = tmp;
    }
    sort(ds, ds + N, cmp);
}
void inds(NhanVien a[], int n)
{
    for (int i = 0; i < n; ++i)
    {
        cout << a[i].mnv << " " << a[i].name << " " << a[i].gender << " " << a[i].birthday << " " << a[i].address << " " << a[i].mst << " " << a[i].day << endl;
    }
}
int main()
{
    struct NhanVien ds[50];
    int N, i;
    cin >> N;
    for (i = 0; i < N; i++)
        nhap(ds[i]);
    sapxep(ds, N);
    inds(ds, N);
    return 0;
}