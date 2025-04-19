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
    int GetNam()
    {
        int x = (lop[1] - '0') * 10 + (lop[2] - '0');
        return x;
    }
};
void nhap(SinhVien a[], int n)
{
    for (int i = 0; i < n; ++i)
    {
        string msv, ten, lop, email;
        getline(cin, msv);
        getline(cin, ten);
        getline(cin, lop);
        getline(cin, email);
        a[i].SetMsv(msv);
        a[i].SetTen(ten);
        a[i].SetLop(lop);
        a[i].SetEmail(email);
    }
}
void in(SinhVien a)
{
    cout << a.GetMsv() << " " << a.GetTen() << " " << a.GetLop() << " " << a.GetEmail() << endl;
}
int main()
{

    int n;
    cin >> n;
    cin.ignore();
    SinhVien a[1005];
    nhap(a, n);
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int nam = 10 * (s[2] - '0') + (s[3] - '0');
        cout << "DANH SACH SINH VIEN KHOA " << s << ":" << endl;
        for (int i = 0; i < n; ++i)
        {
            if (nam == a[i].GetNam())
            {
                in(a[i]);
            }
        }
    }
    return 0;
}