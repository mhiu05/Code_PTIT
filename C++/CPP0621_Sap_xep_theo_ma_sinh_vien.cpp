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

class SinhVien
{
private:
    string msv, ten, lop, email;

public:
    string GetMsv()
    {
        return msv;
    }
    void SetMsv(string msv)
    {
        this->msv = msv;
    }
    void SetTen(string ten)
    {
        this->ten = ten;
    }
    void SetLop(string lop)
    {
        this->lop = lop;
    }
    void SetEmail(string email)
    {
        this->email = email;
    }
    string GetTen()
    {
        return ten;
    }
    string GetLop()
    {
        return lop;
    }
    string GetEmail()
    {
        return email;
    }
};
int cmp(SinhVien a, SinhVien b)
{
    return a.GetMsv() < b.GetMsv();
}
void Sx(SinhVien a[], int n)
{
    sort(a, a + n, cmp);
}
void in(SinhVien a[], int n)
{
    for (int i = 0; i < n; ++i)
    {
        cout << a[i].GetMsv() << " " << a[i].GetTen() << " " << a[i].GetLop() << " " << a[i].GetEmail() << endl;
    }
}
int main()
{

    string tmp;
    int dem = 0;
    int cnt = 0;
    SinhVien a[1005];
    while (getline(cin, tmp))
    {
        ++cnt;
        if (cnt % 4 == 1)
        {
            a[dem].SetMsv(tmp);
        }
        if (cnt % 4 == 2)
        {
            a[dem].SetTen(tmp);
        }
        if (cnt % 4 == 3)
        {
            a[dem].SetLop(tmp);
        }
        if (cnt % 4 == 0)
        {
            a[dem].SetEmail(tmp);
            ++dem;
        }
    }
    Sx(a, dem);
    in(a, dem);
    return 0;
}