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

struct Ds
{
    int stt;
    string Msv, Name, Class, Email, Business;
};
typedef struct Ds Ds;

int cmp(Ds a, Ds b)
{
    return a.Msv < b.Msv;
}

void nhap(Ds a[], int n)
{
    for (int i = 0; i < n; ++i)
    {
        a[i].stt = i + 1;
        getline(cin, a[i].Msv);
        getline(cin, a[i].Name);
        getline(cin, a[i].Class);
        getline(cin, a[i].Email);
        getline(cin, a[i].Business);
    }
    sort(a, a + n, cmp);
}

void in(Ds a)
{
    cout << a.stt << " " << a.Msv << " " << a.Name << " " << a.Class << " " << a.Email << " " << a.Business << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    cin.ignore();
    Ds a[n];
    nhap(a, n);
    int q;
    cin >> q;
    while (q--)
    {
        string s;
        cin >> s;
        for (int i = 0; i < n; ++i)
        {
            if (a[i].Business == s)
            {
                in(a[i]);
            }
        }
    }
    return 0;
}
