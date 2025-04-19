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

struct SinhVien
{
    string msv, name, CodeOfClass, birthday;
    double gpa;
};

void nhap(SinhVien ds[], int N)
{
    for (int i = 0; i < N; ++i)
    {
        cin.ignore();
        // solve msv
        ds[i].msv = "B20DCCN";
        string tmp = "";
        tmp += to_string(i + 1);
        while (tmp.size() < 3)
        {
            tmp = "0" + tmp;
        }
        ds[i].msv += tmp;
        // nhap input
        getline(cin, ds[i].name);
        cin >> ds[i].CodeOfClass >> ds[i].birthday >> ds[i].gpa;
        // solve birthday
        if (ds[i].birthday[2] != '/')
            ds[i].birthday = "0" + ds[i].birthday;
        if (ds[i].birthday[5] != '/')
            ds[i].birthday.insert(3, "0");
        // solve name
        string k = "";
        vector<string> v;
        string x;
        stringstream ss(ds[i].name);
        while (ss >> x)
        {
            v.push_back(x);
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
        for (string it : v)
        {
            k += it;
            k += " ";
        }
        k.pop_back();
        ds[i].name = k;
    }
}
void in(SinhVien ds[], int N)
{
    for (int i = 0; i < N; ++i)
    {
        cout << ds[i].msv << " " << ds[i].name << " " << ds[i].CodeOfClass << " " << ds[i].birthday << " ";
        cout << fixed << setprecision(2) << ds[i].gpa << endl;
    }
}
int main()
{
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    return 0;
}