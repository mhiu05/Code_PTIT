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

class SinhVien
{
private:
    string msv, name, CodeOfClass, birthday;
    double gpa;

public:
    void nhap()
    {
        msv = "B20DCCN001";
        getline(cin, name);
        getline(cin, CodeOfClass);
        getline(cin, birthday);
        cin >> gpa;
    }
    void xuat()
    {
        if (birthday[2] != '/')
            birthday = "0" + birthday;
        if (birthday[5] != '/')
            birthday.insert(3, "0");
        cout << msv << " " << name << " " << CodeOfClass << " " << birthday << " " << fixed << setprecision(2) << gpa;
    }
};

int main()
{
    SinhVien a;
    a.nhap();
    a.xuat();
    return 0;
}