#include <bits/stdc++.h>
#define endl "\n"

using namespace std;

void faster()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

void file()
{
    freopen("data.in", "r", stdin);
    freopen("data.out", "w", stdout);
}

using ll = long long;

const int mod = 1e9 + 7;
const int MAXN = 100005;

int n, w;
int c[1005], a[1005], b[1005];
int Fopt = 0;
vector<int> Xopt(1005);

void backtrack(int j)
{
    for (int i = 0; i <= 1; ++i)
    {
        b[j] = i;
        if (j == n)
        {
            int weight = 0;
            for (int x = 1; x <= n; ++x)
            {
                weight += b[x] * a[x];
            }
            if (weight <= w)
            {
                int sum = 0;
                for (int x = 1; x <= n; ++x)
                {
                    sum += b[x] * c[x];
                }
                if (sum > Fopt)
                {
                    Fopt = sum;
                    for (int x = 1; x <= n; ++x)
                    {
                        Xopt[x] = b[x];
                    }
                }
            }
        }
        else
            backtrack(j + 1);
    }
}

int main()
{
    faster();
    // file();

    cin >> n >> w;
    for (int i = 1; i <= n; ++i)
        cin >> c[i];
    for (int i = 1; i <= n; ++i)
        cin >> a[i];

    backtrack(1);

    cout << Fopt << endl;
    for (int i = 1; i <= n; ++i)
        cout << Xopt[i] << " ";
    return 0;
}