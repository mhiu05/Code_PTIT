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

int n, k, X[20];

vector<string> ans;

void solve()
{
    string s = "";
    for (int i = 1; i <= k; ++i)
    {
        s = s + (char)(X[i] + 'A' - 1);
    }
    ans.push_back(s);
}

void Try(int j)
{
    for (int i = X[j - 1] + 1; i <= n - k + j; ++i)
    {
        X[j] = i;
        if (j == k)
        {
            solve();
        }
        else
        {
            Try(j + 1);
        }
    }
}

void print()
{
    for (string s : ans)
        cout << s << endl;
}

int main()
{
    faster();
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        Try(1);
        print();
        ans.clear();
    }
    return 0;
}