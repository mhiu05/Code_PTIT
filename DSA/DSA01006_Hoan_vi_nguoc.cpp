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

int n, X[1001], ok;
vector<vector<int>> v;

void init()
{
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        X[i] = i;
    }
    ok = 1;
}

void print()
{
    for (int i = v.size() - 1; i >= 0; --i)
    {
        for (int j = 0; j < v[i].size(); ++j)
        {
            cout << v[i][j];
        }
        cout << " ";
    }
}

void sinh()
{
    int i = n - 1;
    while (i > 0)
    {
        if (X[i] < X[i + 1])
            break;
        else
            --i;
    }
    if (i == 0)
        ok = 0;
    else
    {
        int j = n;
        while (j > i)
        {
            if (X[j] > X[i])
                break;
            else
                --j;
        }
        swap(X[i], X[j]);
        reverse(X + i + 1, X + n + 1);
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
            vector<int> tmp;
            for (int k = 1; k <= n; ++k)
            {
                tmp.push_back(X[k]);
            }
            v.push_back(tmp);
            sinh();
        }
        print();
        cout << endl;
        v.clear();
    }
    return 0;
}