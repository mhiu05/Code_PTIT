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
    //	SinhVien(){
    //		msv = name = CodeOfClass = birthday = "";
    //		gpa = 0;
    //	}
    friend ostream &operator<<(ostream &out, SinhVien a)
    {
        out << a.msv << " " << a.name << " " << a.CodeOfClass << " " << a.birthday << " ";
        out << fixed << setprecision(2) << a.gpa;
        return out;
    }
    friend istream &operator>>(istream &in, SinhVien &a)
    {
        a.msv = "B20DCCN001";
        getline(in, a.name);
        getline(in, a.CodeOfClass);
        getline(in, a.birthday);
        in >> a.gpa;
        if (a.birthday[2] != '/')
            a.birthday = "0" + a.birthday;
        if (a.birthday[5] != '/')
            a.birthday.insert(3, "0");
        string ten = "";
        stringstream ss(a.name);
        string tmp;
        vector<string> v;
        while (ss >> tmp)
        {
            v.push_back(tmp);
        }
        for (int i = 0; i < v.size(); ++i)
        {
            for (int j = 0; j < v[i].size(); ++j)
            {
                if (j == 0)
                    v[i][j] = toupper(v[i][j]);
                else
                    v[i][j] = tolower(v[i][j]);
            }
        }
        for (string x : v)
        {
            ten += x;
            ten += " ";
        }
        ten.pop_back();
        a.name = ten;
        return in;
    }
};

int main()
{
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}