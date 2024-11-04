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

struct Hang
{
    int code;
    string name, type;
    double buy, sell;
};
// typedef struct Hang Hang;
void nhap(Hang a[], int n)
{
    for (int i = 0; i < n; ++i)
    {
        cin.ignore();
        a[i].code = i + 1;
        getline(cin, a[i].name);
        getline(cin, a[i].type);
        cin >> a[i].buy >> a[i].sell;
    }
}
int cmp(Hang a, Hang b)
{
    double x = a.sell - a.buy;
    double y = b.sell - b.buy;
    return x > y;
}
void in(Hang a[], int n)
{
    sort(a, a + n, cmp);
    for (int i = 0; i < n; ++i)
    {
        cout << a[i].code << " " << a[i].name << " " << a[i].type << " ";
        cout << fixed << setprecision(2) << a[i].sell - a[i].buy << endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    struct Hang a[n];
    nhap(a, n);
    in(a, n);
    return 0;
}