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

bool check_number(string s)
{
    for (int i = 0; i < s.size(); ++i)
    {
        if (!isdigit(s[i]))
            return false;
    }
    ll ans = 0;
    for (int i = 0; i < s.size(); ++i)
    {
        ans = 10 * ans + (s[i] - '0');
    }
    if (ans > INT_MAX || ans < INT_MIN)
        return false;
    return true;
}

ll convert_string_to_integer(string s)
{
    ll ans = 0;
    for (int i = 0; i < s.size(); ++i)
    {
        ans = 10 * ans + (s[i] - '0');
    }
    return ans;
}

int main()
{
    faster();
    ifstream in;
    in.open("DATA.in");

    string s;
    ll sum = 0;
    while (in >> s)
    {
        if (check_number(s))
        {
            sum += convert_string_to_integer(s);
        }
    }
    cout << sum;
    in.close();
    return 0;
}