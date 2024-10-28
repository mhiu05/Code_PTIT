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

struct NhanVien
{
    string mnv, name, gender, birthday, address, mst, day;
};
int z = 0;
void nhap(NhanVien &a)
{
    if (z == 0)
    {
        cin.ignore();
        z++;
    }
    getline(cin, a.name);
    getline(cin, a.gender);
    getline(cin, a.birthday);
    getline(cin, a.address);
    getline(cin, a.mst);
    getline(cin, a.day);
}
void inds(NhanVien ds[], int N)
{
    for (int i = 0; i < N; ++i)
    {
        ds[i].mnv = to_string(i + 1);
        while (ds[i].mnv.size() < 5)
        {
            ds[i].mnv = "0" + ds[i].mnv;
        }
        cout << ds[i].mnv << " " << ds[i].name << " " << ds[i].gender << " " << ds[i].birthday << " " << ds[i].address << " " << ds[i].mst << " " << ds[i].day << endl;
    }
}
int main()
{
    struct NhanVien ds[50];
    int N, i;
    cin >> N;
    for (i = 0; i < N; i++)
        nhap(ds[i]);
    inds(ds, N);
    return 0;
}