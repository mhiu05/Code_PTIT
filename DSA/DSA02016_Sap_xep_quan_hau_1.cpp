#include <iostream>
using namespace std;

int n, a[100], xuoi[100], nguoc[100], cot[100];

int cnt = 0;

void backtracking(int j)
{
    for (int i = 1; i <= n; ++i)
    {
        if (!cot[i] && !xuoi[j - i + n] && !nguoc[i + j - 1])
        {
            a[j] = i;
            cot[i] = 1;
            xuoi[j - i + n] = 1;
            nguoc[i + j - 1] = 1;
            if (j == n)
            {
                ++cnt;
            }
            else
                backtracking(j + 1);
            cot[i] = 0;
            xuoi[j - i + n] = 0;
            nguoc[i + j - 1] = 0;
        }
    }
}

int main()
{
    int t; cin >> t;
    while(t--){
        cnt = 0;
        cin >> n;
        backtracking(1);
        cout << cnt << endl;
    }
    return 0;
}