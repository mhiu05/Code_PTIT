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
        nganh = x;
        cout << ma << " " << ten << " " << nganh << endl;
    }
};
int cmp(Gv a, Gv b)
{
    string tmp;
    vector<string> v1, v2;
    int cnt1 = 0, cnt2 = 0;
    stringstream ss1(a.GetTen());
    stringstream ss2(b.GetTen());
    while (ss1 >> tmp)
    {
        v1.push_back(tmp);
        ++cnt1;
    }
    string ten1 = v1[cnt1 - 1];
    while (ss2 >> tmp)
    {
        v2.push_back(tmp);
        ++cnt2;
    }
    string ten2 = v2[cnt2 - 1];
    if (ten1 != ten2)
    {
        return ten1 < ten2;
    }
    return a.GetMa() < b.GetMa();
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
    sort(a, a + n, cmp);
    for (int i = 0; i < n; ++i)
    {
        a[i].in();
    }
    return 0;
}