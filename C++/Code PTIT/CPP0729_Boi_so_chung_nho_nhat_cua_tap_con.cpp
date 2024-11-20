#include <iostream>
#include <vector>
#include <numeric> // gcd
#include <bits/stdc++.h>
using namespace std;

const int MOD = 10007;

// Hàm tính LCM của hai số
int lcm(int a, int b)
{
    return (a / __gcd(a, b)) * b;
}

// Hàm giải bài toán
void solve()
{
    int T;
    cin >> T; // Số bộ test

    for (int t = 1; t <= T; t++)
    {
        int n;
        cin >> n; // Số phần tử trong dãy
        vector<int> a(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        // Tính tổng LCM của tất cả tập con
        long long totalLCM = 0;

        // Sử dụng công thức bao hàm-loại trừ
        for (int i = 1; i < (1 << n); i++)
        { // Duyệt tất cả tập con
            long long currentLCM = 1;
            bool valid = true;

            for (int j = 0; j < n; j++)
            {
                if (i & (1 << j))
                {
                    currentLCM = lcm(currentLCM, a[j]);
                    if (currentLCM > MOD)
                        currentLCM %= MOD; // Giới hạn giá trị
                }
            }

            totalLCM = (totalLCM + currentLCM) % MOD;
        }

        // In kết quả
        cout << "Case " << t << ": " << totalLCM << endl;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}