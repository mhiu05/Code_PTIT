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

int main()
{
    faster();
    int n;
    cin >> n;
    vector<int> v(n);
    for (int &x : v)
    {
        cin >> x;
    }

    unordered_map<int, int> pos;
    for (int i = 0; i < n; ++i)
    {
        pos[v[i]] = i;
    }

    int max_len = 1;
    int current_len = 1;

    for (int i = 2; i <= n; ++i)
    {
        if (pos[i] > pos[i - 1])
        {
            current_len++;
            max_len = max(max_len, current_len);
        }
        else
        {
            current_len = 1;
        }
    }

    cout << n - max_len << endl;
    return 0;
}