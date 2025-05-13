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

int a[50];
int n, k;
char c;
void backtrack(int j)
{
    
    for (int i = a[j - 1]; i <= n; ++i)
    {
        if(i == 0) continue;
        a[j] = i;
        if (j == k)
        {
            for(int x = 1; x <= k; ++x){
                cout << char(a[x] + (int)'A' - 1);
            }
            cout << endl;
        }
        else
        {
            backtrack(j + 1);
        }
    }
}

int main()
{
    faster();
    cin >> c >> k;
    n = c - 'A' + 1;
    backtrack(1);
    return 0;
}