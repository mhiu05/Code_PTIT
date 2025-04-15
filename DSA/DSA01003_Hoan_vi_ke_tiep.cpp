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

int a[1001], n;
void sinh()
{
    int i = n - 1;
    while (i > 0)
    {
        if (a[i] < a[i + 1])
            break;
        else
            --i;
    }
    if (i == 0)
    {
        for (int j = 1; j <= n; ++j)
        {
            cout << j << " ";
        }
    }
    else
    {
        int j = n;
        while (j > i)
        {
            if (a[j] < a[i])
            {
                --j;
            }
            else
                break;
        }
        swap(a[i], a[j]);
        reverse(a + j + 1, a + n + 1);
        for (int k = 1; k <= n; ++k)
        {
            cout << a[k] << " ";
        }
    }
    cout << endl;
}

int main()
{
    faster();
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (int i = 1; i <= n; ++i)
        {
            cin >> a[i];
        }
        sinh();
    }
    return 0;
}