// Bài toán phân tích số
// Ví dụ N = 100, X = {10, 20, 50}
// ta có 10 cách chia như sau:
// 10 10 10 10 10 10 10 10 10 10
// 10 10 10 10 10 10 10 10 20
// 10 10 10 10 10 10 20 20
// 10 10 10 10 10 50
// 10 10 10 10 20 20 20
// 10 10 10 20 50
// 10 10 20 20 20 20
// 10 20 20 50
// 20 20 20 20 20
// 50 50

#include <bits/stdc++.h>
#define fi first
#define se second
#define ms(a, n) memset(a, n, sizeof(a))
#define endl "\n"
#define PI 3.141592653589793238
using namespace std;

using ll = long long;

typedef pair<ll, ll> pl;
typedef vector<pl> vll;
typedef pair<ll, int> pi;
typedef vector<pi> vii;

const ll modi = 1000000007;
const int MAXN = 1e7 + 1;

void faster()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
}

int n = 100;
int a[50], X[4] = {0, 10, 20, 50};
int sum = 0, cnt = 0;

vector<int> v[100];
void backtrack(int pos)
{
    if (sum >= n)
    {
        if (sum == n)
        {
            for (int i = 1; i <= pos - 1; ++i)
            {
                v[cnt].push_back(a[i]);
            }
            ++cnt;
        }
        return;
    }
    for (int i = 1; i <= 3; ++i)
    {
        a[pos] = X[i];
        if (a[pos] >= a[pos - 1])
        {
            sum += X[i];
            backtrack(pos + 1);
            sum -= X[i];
        }
    }
}

int main()
{
    faster();
    backtrack(1);
    for (int i = 0; i < v[0].size(); ++i)
    {
        cout << v[9][i] << " ";
    }
    int min_val = 1000000000;
    for (int i = 0; i < 100; ++i)
    {
        if (v[i].size() < min_val)
        {
            min_val = v[i].size();
        }
    }
    for (int i = 0; i < 100; ++i)
    {
        if (min_val == v[i].size())
        {
            for (int j = 0; j < v[i].size(); ++j)
            {
                cout << v[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}