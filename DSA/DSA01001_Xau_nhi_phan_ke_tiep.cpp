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

int main()
{
    faster();
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n = s.size();
        int i = n - 1;

        while (i >= 0 && s[i] == '1')
        {
            s[i] = '0';
            --i;
        }

        if (i >= 0)
            s[i] = '1';

        cout << s << endl;
    }
    return 0;
}