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

struct ThiSinh
{
    string name, birthday;
    double x, y, z;
};
typedef struct ThiSinh ThiSinh;

void in(ThiSinh A)
{
    cout << A.name << " " << A.birthday << " ";
    cout << fixed << setprecision(1) << A.x + A.y + A.z;
}

void nhap(ThiSinh &A)
{
    getline(cin, A.name);
    cin >> A.birthday;
    cin >> A.x >> A.y >> A.z;
}

int main()
{
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}