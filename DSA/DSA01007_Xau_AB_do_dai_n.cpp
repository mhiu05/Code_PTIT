#include <bits/stdc++.h>
#define endl "\n"
#define second sc
#define first fi

using namespace std;

using ll = long long;

const int mod = 1e9 + 7;
const int MAXN = 1e6 + 1;

void faster()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

char X[11];
int n, ok;

void init()
{
    cin >> n;
    ok = 1;
    for (int i = 1; i <= n; ++i)
    {
        X[i] = 'A';
    }
}

void print()
{
    for (int i = 1; i <= n; ++i)
    {
        cout << X[i];
    }
    cout << " ";
}

void sinh()
{
    int i = n;
    while (i > 0 && X[i] == 'B')
    {
        X[i] = 'A';
        --i;
    }
    if (i == 0)
        ok = 0;
    else
    {
        X[i] = 'B';
    }
}

int main()
{
    faster();
    int t;
    cin >> t;
    while (t--)
    {
        init();
        while (ok)
        {
            print();
            sinh();
        }
        cout << endl;
    }
    return 0;
}