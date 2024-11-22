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
const int MAXN = 1e5 + 5;

int kadane_algorithm(vector<int> &tmp)
{
    int curr_sum = 0;
    int max_sum = INT_MIN;
    for (int i = 0; i < tmp.size(); ++i)
    {
        curr_sum += tmp[i];
        if (curr_sum > max_sum)
            max_sum = curr_sum;
        if (curr_sum < 0)
            curr_sum = 0;
    }
    return max_sum;
}

int max_sum_rectangle(vector<vector<int>> matrix, int n, int m)
{
    int rows = n, cols = m;

    int max_sum = INT_MIN;

    vector<int> tmp(rows);

    for (int left = 0; left < cols; ++left)
    {

        for (int i = 0; i < rows; ++i)
        {
            tmp[i] = 0;
        }

        for (int right = left; right < cols; ++right)
        {
            for (int row = 0; row < rows; ++row)
            {
                tmp[row] += matrix[row][right];
            }

            int sum = kadane_algorithm(tmp);

            max_sum = max(max_sum, sum);
        }
    }

    return max_sum;
}

int main()
{
    faster();
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> matrix(n, vector<int>(m));
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < m; ++j)
            {
                cin >> matrix[i][j];
            }
        }
        cout << max_sum_rectangle(matrix, n, m) << endl;
    }
    return 0;
}