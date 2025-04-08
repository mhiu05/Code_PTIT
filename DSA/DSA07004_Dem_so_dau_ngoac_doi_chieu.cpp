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

int solve(string s)
{
    int cnt = 0;
    int delta = 0;
    for (char c : s)
    {
        if (c == '(')
            ++delta;
        else
        {
            if (delta == 0)
            {
                ++cnt;
                ++delta; // đổi ) thành (
            }
            else
                --delta; // kết hợp với ( trước đó
        }
    }
    cnt += delta / 2;
    return cnt;
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
        cout << solve(s) << endl;
    }
    return 0;
}