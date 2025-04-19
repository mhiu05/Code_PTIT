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

class Dn
{
public:
    string ma, ten;
    int sl;

    friend istream &operator>>(istream &in, Dn &a)
    {
        cin.ignore();
        getline(in, a.ma);
        getline(in, a.ten);
        in >> a.sl;
        return in;
    }

    friend ostream &operator<<(ostream &out, Dn a)
    {
        out << a.ma << " " << a.ten << " " << a.sl << endl;
        return out;
    }
};

bool cmp(Dn a, Dn b)
{
    if (a.sl != b.sl)
        return a.sl > b.sl;
    return a.ma < b.ma;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    Dn a[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    sort(a, a + n, cmp);
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        cin.ignore();
        cout << "DANH SACH DOANH NGHIEP NHAN TU " << x << " DEN " << y << " SINH VIEN:\n";
        for (int i = 0; i < n; ++i)
        {
            if (a[i].sl >= x && a[i].sl <= y)
                cout << a[i];
        }
    }
    return 0;
}