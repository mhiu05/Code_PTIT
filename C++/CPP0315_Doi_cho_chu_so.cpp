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

int main()
{
    faster();
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int i = s.size() - 2;
        while (i >= 0)
        {
            if (s[i] > s[i + 1])
                break;
            else
                --i;
        }
        if (i < 0)
            cout << -1 << endl;
        else
        {
            int j = i + 1;
            for (int k = i + 1; k < s.size(); ++k)
            {
                if (s[k] < s[i] && s[k] > s[j])
                {
                    j = k;
                }
            }
            swap(s[i], s[j]);
            if (s[0] == '0')
                s.erase(0, 1);
            cout << s << endl;
        }
    }
    return 0;
}