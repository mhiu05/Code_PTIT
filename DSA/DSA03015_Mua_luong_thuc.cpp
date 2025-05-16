#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, s, m;
    cin >> n >> s >> m;

    int total_needed = s * m;

    // Tính số ngày tối thiểu phải mua
    int min_days = ceil(1.0 * total_needed / n);

    // Số ngày có thể mua là số ngày trừ đi số Chủ nhật
    int available_days = s - (s / 7);

    if (min_days > available_days)
    {
        cout << -1 << '\n';
    }
    else
    {
        cout << min_days << '\n';
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
