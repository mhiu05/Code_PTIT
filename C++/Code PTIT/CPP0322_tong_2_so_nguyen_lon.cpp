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

string add(string a, string b)
{
    if (a.size() < b.size())
        swap(a, b);

    while (a.size() != b.size())
        b = "0" + b;

    int carry = 0;

    string ans = "";

    for (int i = a.size() - 1; i >= 0; --i)
    {
        int x = a[i] - '0' + b[i] - '0' + carry;
        int kq = x % 10;
        carry = x / 10;
        ans = to_string(kq) + ans;
    }

    if (carry != 0)
        ans = to_string(carry) + ans;

    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        string a, b;
        cin >> a >> b;
        cout << add(a, b) << endl;
    }
    return 0;
}