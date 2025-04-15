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

void thn(int n, char a, char b, char c)
{
    if (n == 1)
        cout << a << " -> " << c << endl;
    else
    {
        thn((n - 1), a, c, b);
        cout << a << " -> " << c << endl;
        thn(n - 1, b, a, c);
    }
}

int main()
{
    faster();
    int n;
    cin >> n;
    thn(n, 'A', 'B', 'C');
    return 0;
}