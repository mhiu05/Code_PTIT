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

bool isEven(ll a[], int n)
{
    for (int i = 0; i < n; ++i)
    {
        if (a[i] % 2 != 0)
            return false;
    }
    return true;
}

bool check(ll a[], int n)
{
    for (int i = 0; i < n; ++i)
    {
        if (a[i] != 0)
            return 0;
    }
    return 1;
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
        string s;
        cin >> s;
        int posI = 0;
        vector<int> v;
        if (s[0] == 'D')
        {
            v.push_back(2);
            v.push_back(1);
        }
        if (s[0] == 'I')
        {
            v.push_back(1);
            v.push_back(2);
            posI = 1;
        }
        int minAdd = 3;
        for (int i = 1; i < s.size(); ++i)
        {
            if (s[i] == 'D')
            {
                v.push_back(v[i]);
                for (int j = posI; j <= i; ++j)
                {
                    v[j]++;
                }
            }
            else
            {
                v.push_back(minAdd);
                posI = i + 1;
            }
            minAdd++;
        }
        for (int x : v)
            cout << x;
        cout << endl;
    }
    return 0;
}