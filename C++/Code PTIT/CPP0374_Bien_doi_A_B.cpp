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
    string s;
    cin >> s;
    int cnt = 0;

    for (int i = 1; i < s.size() - 1; i++)
    {
        if (s[i - 1] == 'A' && s[i] == 'B' && s[i + 1] == 'A')
        {
            s[i] = 'A';
            cnt++;
        }
        if (s[i - 1] == 'B' && s[i] == 'A' && s[i + 1] == 'B')
        {
            s[i] = 'B';
            cnt++;
        }
    }

    if (s[0] == 'B' && s[1] == 'A')
    {
        ++cnt;
        s[0] = 'A';
    }
    if (s[s.size() - 1] == 'B' && s[s.size() - 2] == 'A')
    {
        ++cnt;
        s[s.size() - 1] = 'A';
    }

    for (int i = 1; i < s.size(); ++i)
    {
        if (s[i] != s[i - 1])
        {
            ++cnt;
        }
    }
    if (s[s.size() - 1] == 'B')
        cnt++;
    cout << cnt;
    return 0;
}