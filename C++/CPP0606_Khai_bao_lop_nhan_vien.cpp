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
class NhanVien
{
private:
    string mnv, name, gender, birthday, address, mst, day;

public:
    friend ostream &operator>>(ostream &out, NhanVien a)
    {
        out << a.mnv << " " << a.name << " " << a.gender << " " << a.birthday << " " << a.address << " " << a.mst << " " << a.day;
        return out;
    }
    friend istream &operator>>(istream &in, NhanVien &a)
    {
        a.mnv = "00001";
        getline(in, a.name);
        getline(in, a.gender);
        getline(in, a.birthday);
        getline(in, a.address);
        getline(in, a.mst);
        getline(in, a.day);
        return in;
    }
};

int main()
{
    NhanVien a;
    cin >> a;
    cout >> a;
    return 0;
}