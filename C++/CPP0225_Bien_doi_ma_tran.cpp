#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<vector<int>> mt(n, vector<int>(n));
        int tong = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> mt[i][j];
                tong += mt[i][j];
            }
        }
        int hang[n], cot[n];
        for (int i = 0; i < n; i++)
        {
            hang[i] = 0;
            cot[i] = 0;
            for (int j = 0; j < n; j++)
            {
                hang[i] += mt[i][j];
                cot[i] += mt[j][i];
            }
        }
        int sln = 0;
        for (int i = 0; i < n; i++)
        {
            if (sln < hang[i])
            {
                sln = hang[i];
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (sln < cot[i])
            {
                sln = cot[i];
            }
        }
        cout << sln * n - tong << endl;
    }
}