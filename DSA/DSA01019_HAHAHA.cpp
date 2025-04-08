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

char X[20];
int n, ok;

void init()
{
    cin >> n;
    ok = 1;
    for (int i = 1; i <= n; ++i)
    {
        X[i] = 'H';
    }
}

vector<string> v;

void print()
{
    sort(v.begin(), v.end());
    for (int i = 0; i < v.size(); ++i)
    {
        for (int j = 0; j < v[i].size(); ++j)
        {
            cout << v[i][j];
        }
        cout << endl;
    }
}

void sinh()
{
    int i = n;
    while (i > 0 && X[i] == 'A')
    {
        X[i] = 'H';
        --i;
    }
    if (i == 0)
        ok = 0;
    else
    {
        X[i] = 'A';
    }
}

int check()
{
    if (X[1] != 'H')
        return 0;
    if (X[n] != 'A')
        return 0;
    for (int i = 2; i <= n; ++i)
    {
        if (X[i] == X[i - 1] && X[i] == 'H')
            return 0;
    }
    return 1;
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
            if (check())
            {
                string tmp = "";
                for (int i = 1; i <= n; ++i)
                {
                    tmp += X[i];
                }
                v.push_back(tmp);
            }
            sinh();
        }
        print();
        v.clear();
    }
    return 0;
}