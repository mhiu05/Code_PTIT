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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int check = 1;
    string tmp;
    while (cin >> tmp)
    {
        if (check)
        {
            tmp[0] = toupper(tmp[0]);
            for (int i = 1; i < tmp.size(); ++i)
            {
                tmp[i] = tolower(tmp[i]);
            }
            check = 0;
        }
        else
        {
            for (int i = 0; i < tmp.size(); ++i)
            {
                tmp[i] = tolower(tmp[i]);
            }
        }
        if (tmp[tmp.size() - 1] == '!' || tmp[tmp.size() - 1] == '?' || tmp[tmp.size() - 1] == '.')
        {
            tmp.pop_back();
            cout << tmp << endl;
            check = 1;
        }
        else
            cout << tmp << " ";
    }
    return 0;
}