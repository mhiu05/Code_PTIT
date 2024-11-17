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
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= 2 * n; ++j)
        {
            if (j <= n)
            {
                if (j == n - i + 1)
                    cout << "*";
                else
                    cout << " ";
            }
            else
            {
                if (j == i + n - 1)
                    cout << "*";
                else if (j < i + n - 1)
                    cout << " ";
            }
        }
        cout << endl;
    }
    for (int i = 2; i <= n; ++i)
    {
        for (int j = 1; j <= 2 * n; ++j)
        {
            if (j <= n)
            {
                if (j == i)
                    cout << "*";
                else
                    cout << " ";
            }
            else
            {
                if (j == 2 * n - i)
                    cout << "*";
                else if (j < 2 * n - i)
                    cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}