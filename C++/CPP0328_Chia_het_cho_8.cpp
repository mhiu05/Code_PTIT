#include <bits/stdc++.h>
using namespace std;

void faster()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

using ll = long long;

const int mod = 1e9 + 7;
const int MAXN = 1e5 + 5;

int main()
{
    faster();
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int cnt = 0;
        for (int i = 0; i < s.size(); ++i)
        {
            int mod8 = 0, sum_digits = 0;
            for (int j = i; j < s.size(); ++j)
            {
                int digit = s[j] - '0';
                mod8 = 10 * mod8 + digit;
                mod8 %= 8;
                sum_digits += digit;
                sum_digits %= 3;
                if (mod8 == 0 && sum_digits != 0)
                    ++cnt;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}