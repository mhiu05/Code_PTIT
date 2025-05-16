#include <bits/stdc++.h>
#define endl "\n"

using namespace std;

void faster()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

using ll = long long;

const int mod = 1e9 + 7;
const int MAXN = 100005;

string add(string a, string b)
{
    if (a.length() < b.length())
        swap(a, b);
    while (a.length() != b.length())
        b = "0" + b;
    string c;
    int nho = 0;
    for (int i = a.length() - 1; i >= 0; i--)
    {
        int x = a[i] - '0' + b[i] - '0' + nho;
        nho = x / 10;
        int z = x % 10;
        c.push_back(z + '0');
    }
    if (nho > 0)
        c.push_back(nho + '0');
    reverse(c.begin(), c.end());
    return c;
}

string mul(string a, string b)
{
    string c;
    vector<string> M(10, "0");
    M[1] = b;
    for (int i = 2; i < 10; i++)
    {
        M[i] = add(M[i - 1], b);
    }
    for (int i = 0; i < a.length(); i++)
    {
        c.push_back('0');
        c = add(c, M[a[i] - '0']);
    }
    return c;
}

int main()
{
    faster();
    ll t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string C[n + 1];
        C[0] = "1";
        C[1] = "1";
        for (int i = 2; i <= n; ++i)
        {
            string tmp = "0";
            for (int j = 0; j < i; ++j)
            {
                tmp = add(tmp, mul(C[j], C[i - j - 1]));
            }
            C[i] = tmp;
        }
        cout << C[n] << endl;
    }
    return 0;
}