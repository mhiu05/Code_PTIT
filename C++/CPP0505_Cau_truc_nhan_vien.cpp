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

struct NhanVien
{
    string mnv, name, gender, birthday, address, mst, day;
};
void nhap(NhanVien &a)
{
    a.mnv = "00001";
    getline(cin, a.name);
    getline(cin, a.gender);
    getline(cin, a.birthday);
    getline(cin, a.address);
    getline(cin, a.mst);
    getline(cin, a.day);
}
void in(NhanVien a)
{
    cout << a.mnv << " " << a.name << " " << a.gender << " " << a.birthday << " " << a.address << " " << a.mst << " " << a.day;
}
int main()
{
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}