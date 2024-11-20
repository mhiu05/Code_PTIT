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

int dem = 0;
class Gv
{
private:
    string ma, ten, nganh;

public:
    string GetTen()
    {
        return ten;
    }
    string GetMa()
    {
        return ma;
    }
    string GetNganh()
    {
        return nganh;
    }
    void nhap()
    {
        string tmp = to_string(dem);
        if (tmp.size() < 2)
            tmp = "0" + tmp;
        ma = "GV" + tmp;
        getline(cin, ten);
        getline(cin, nganh);
    }
    void in()
    {
        string tmp;
        stringstream ss(nganh);
        string x = "";
        while (ss >> tmp)
        {
            tmp[0] = toupper(tmp[0]);
            x = x + tmp[0];
        }
        cout << ma << " " << ten << " " << x << endl;
    }
};
bool check(string t, string s)
{
    for (int i = 0; i < s.size(); ++i)
    {
        s[i] = tolower(s[i]);
    }
    for (int i = 0; i < t.size(); ++i)
    {
        t[i] = tolower(t[i]);
    }
    if (t.find(s) != string::npos)
        return true;
    return false;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    cin.ignore();
    Gv a[n];
    for (int i = 0; i < n; ++i)
    {
        ++dem;
        a[i].nhap();
    }
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string s;
        getline(cin, s);
        cout << "DANH SACH GIANG VIEN THEO TU KHOA " << s << ":\n";
        for (int i = 0; i < n; ++i)
        {
            if (check(a[i].GetTen(), s))
                a[i].in();
        }
    }
    return 0;
}