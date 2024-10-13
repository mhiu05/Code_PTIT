#include <bits/stdc++.h>
#define fi first
#define sc second
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

int length_string_is_erased(string s)
{
    int cnt = 0;
    string t = "100";
    while (s.find(t) != string::npos)
    {
        s.erase(s.find(t), 3);
        ++cnt;
    }
    return cnt * 3;
}

int main()
{
    faster();
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        if (length_string_is_erased(s) != 0)
            cout << length_string_is_erased(s) << endl;
        else
            cout << endl;
    }
    return 0;
}