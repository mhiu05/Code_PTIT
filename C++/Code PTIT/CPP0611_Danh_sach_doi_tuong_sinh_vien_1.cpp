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
class SinhVien
{
private:
    string msv, name, CodeOfClass, birthday;
    double gpa;

public:
    friend istream &operator>>(istream &in, SinhVien &a)
    {
        in.ignore();
        getline(in, a.name);
        getline(in, a.CodeOfClass);
        getline(in, a.birthday);
        in >> a.gpa;
        if (a.birthday[2] != '/')
            a.birthday = "0" + a.birthday;
        if (a.birthday[5] != '/')
            a.birthday.insert(3, "0");
        return in;
    }
    friend ostream &operator<<(ostream &out, SinhVien &a)
    {
        ++cnt;
        string tmp = to_string(cnt);
        while (tmp.size() < 3)
        {
            tmp = "0" + tmp;
        }
        tmp = "B20DCCN" + tmp;
        a.msv = tmp;
        out << a.msv << " " << a.name << " " << a.CodeOfClass << " " << a.birthday << " ";
        out << fixed << setprecision(2) << a.gpa << endl;
        return out;
    }
};

int main()
{
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for (i = 0; i < N; i++)
    {
        cin >> ds[i];
    }
    for (i = 0; i < N; i++)
    {
        cout << ds[i];
    }
    return 0;
}