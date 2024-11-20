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
int cnt = 0;
int dem = 0;
class NhanVien
{
private:
    string msv, name, gender, birthday, address, mst, day;

public:
    friend istream &operator>>(istream &in, NhanVien &a)
    {
        if (cnt == dem)
        {
            scanf("\n");
            ++dem;
        }
        getline(in, a.name);
        getline(in, a.gender);
        getline(in, a.birthday);
        getline(in, a.address);
        getline(in, a.mst);
        getline(in, a.day);
        ++cnt;
        string tmp = to_string(cnt);
        while (tmp.size() < 5)
        {
            tmp = "0" + tmp;
        }
        a.msv = tmp;
        return in;
    }

    friend ostream &operator<<(ostream &out, NhanVien &a)
    {
        string k;
        stringstream ss(a.name);
        string x = "";
        while (ss >> k)
        {
            k[0] = toupper(k[0]);
            for (int i = 1; i < k.size(); ++i)
            {
                k[i] = tolower(k[i]);
            }
            x += k;
            x += " ";
        }
        x.pop_back();
        a.name = x;
        out << a.msv << " " << a.name << " " << a.gender << " " << a.birthday << " " << a.address << " " << a.mst << " " << a.day << endl;
        return out;
    }
    string GetBirthday()
    {
        return birthday;
    }
};
int cmp(NhanVien a, NhanVien b)
{
    int ma = (a.GetBirthday()[0] - '0') * 10 + (a.GetBirthday()[1] - '0');
    int da = (a.GetBirthday()[3] - '0') * 10 + (a.GetBirthday()[4] - '0');
    int ya = (a.GetBirthday()[6] - '0') * 1000 + (a.GetBirthday()[7] - '0') * 100 + (a.GetBirthday()[8] - '0') * 10 + (a.GetBirthday()[9] - '0');
    int mb = (b.GetBirthday()[0] - '0') * 10 + (b.GetBirthday()[1] - '0');
    int db = (b.GetBirthday()[3] - '0') * 10 + (b.GetBirthday()[4] - '0');
    int yb = (b.GetBirthday()[6] - '0') * 1000 + (b.GetBirthday()[7] - '0') * 100 + (b.GetBirthday()[8] - '0') * 10 + (b.GetBirthday()[9] - '0');
    if (yb != ya)
        return ya < yb;
    if (ma != mb)
        return ma < mb;
    return da < db;
}
void sapxep(NhanVien ds[], int N)
{
    sort(ds, ds + N, cmp);
}
int main()
{
    NhanVien ds[50];
    int N, i;
    cin >> N;
    for (i = 0; i < N; i++)
        cin >> ds[i];
    sapxep(ds, N);
    for (i = 0; i < N; i++)
        cout << ds[i];
    return 0;
}