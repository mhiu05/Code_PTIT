#include <iostream>
#include <vector>
using namespace std;

const int MOD = 1e9 + 7;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N, K;
        cin >> N >> K;
        vector<int> A(N);
        for (int i = 0; i < N; i++)
        {
            cin >> A[i];
        }

        vector<int> dp(K + 1, 0);
        dp[0] = 1; // có 1 cách để tạo ra tổng 0

        for (int j = 1; j <= K; j++)
        {
            for (int i = 0; i < N; i++)
            {
                if (j >= A[i])
                {
                    dp[j] = (dp[j] + dp[j - A[i]]) % MOD;
                }
            }
        }

        cout << dp[K] << endl;
    }
    return 0;
}
