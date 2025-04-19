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
    string GetNganh()
    {
        string tmp = msv.substr(5, 2);
        if (tmp == "AT" || tmp == "CN")
        {
            if (lop[0] == 'E')
            {
                return "remove";
            }
        }
        return tmp;
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
    cin.ignore();
    while (t--)
    {
        string s;
        getline(cin, s);
        for (int i = 0; i < s.size(); ++i)
        {
            s[i] = toupper(s[i]);
        }
        string x = "";
        stringstream ss(s);
        string tmp;
        int cnt = 0;
        while (ss >> tmp)
        {
            ++cnt;
            x = x + tmp[0];
            if (cnt == 2)
                break;
        }
        cout << "DANH SACH SINH VIEN NGANH " << s << ":" << endl;
        for (int i = 0; i < n; ++i)
        {
            if (x == a[i].GetNganh())
            {
                in(a[i]);
            }
        }
    }
    return 0;
}