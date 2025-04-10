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

int convertToMax(int n)
{
    int res = 0;
    string s = to_string(n);
    for (int i = 0; i < s.size(); ++i)
    {
        if (s[i] == '5')
            s[i] = '6';
        res = 10 * res + (s[i] - '0');
    }
    return res;
}
int convertToMin(int n)
{
    int res = 0;
    string s = to_string(n);
    for (int i = 0; i < s.size(); ++i)
    {
        if (s[i] == '6')
            s[i] = '5';
        res = 10 * res + (s[i] - '0');
    }
    return res;
}

int main()
{
    faster();
    int a, b;
    cin >> a >> b;
    cout << convertToMin(a) + convertToMin(b) << " " << convertToMax(a) + convertToMax(b);
    return 0;
}