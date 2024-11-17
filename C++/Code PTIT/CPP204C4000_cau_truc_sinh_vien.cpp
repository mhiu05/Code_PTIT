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
    string msv, name, CodeOfClass, birthday;
    double gpa;
};

void nhapThongTinSV(SinhVien &a)
{
    a.msv = "N20DCCN001";
    getline(cin, a.name);
    cin >> a.CodeOfClass;
    cin >> a.birthday;
    if (a.birthday[2] != '/')
        a.birthday = "0" + a.birthday;
    if (a.birthday[5] != '/')
        a.birthday.insert(3, "0");
    cin >> a.gpa;
}

void inThongTinSV(SinhVien a)
{
    cout << a.msv << " " << a.name << " " << a.CodeOfClass << " " << a.birthday << " ";
    cout << fixed << setprecision(2) << a.gpa;
}

int main()
{
    struct SinhVien a;
    nhapThongTinSV(a);
    inThongTinSV(a);
    return 0;
}