#include <bits/stdc++.h>
using namespace std;

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
        int n;
        cin >> n;
        vector<int> v(n);
        for (int &x : v)
            cin >> x;

        if (n == 1) // Nếu mảng chỉ có 1 phần tử, ta đã ở đích
        {
            cout << 0 << endl;
            continue;
        }

        int steps = 0;    // Số bước dịch chuyển
        int maxReach = 0; // Vị trí xa nhất có thể đạt được
        int currEnd = 0;  // Vị trí hiện tại của lần nhảy
        bool reachable = true;

        for (int i = 0; i < n; ++i)
        {
            // Nếu vị trí hiện tại không thể nhảy, trả về -1
            if (i > maxReach)
            {
                reachable = false;
                break;
            }

            maxReach = max(maxReach, i + v[i]); // Cập nhật vị trí xa nhất
            if (i == currEnd)                   // Khi đạt đến cuối phạm vi của lần nhảy
            {
                ++steps;
                currEnd = maxReach;
                if (currEnd >= n - 1) // Nếu đã đến hoặc vượt đích
                    break;
            }
        }

        if (reachable)
            cout << steps << endl;
        else
            cout << -1 << endl;
    }
    return 0;
}