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
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;
        map<int, int> mpA, mpB, mpC;
        unordered_set<int> se, se1;
        vector<int> a(n), b(m), c(k);
        for (int &x : a)
        {
            cin >> x;
            mpA[x]++;
            se.insert(x);
        }
        for (int &x : b)
        {
            cin >> x;
            mpB[x]++;
            if (se.count(x))
            {
                se1.insert(x);
            }
        }
        int check = 0;
        set<int> seC;
        for (int &x : c)
        {
            cin >> x;
            mpC[x]++;
            if (se1.count(x))
            {
                seC.insert(x);
                check = 1;
            }
        }
        if (!check)
            cout << "NO";
        else
        {
            for (int x : seC)
            {
                int k = min({mpA[x], mpB[x], mpC[x]});
                for (int i = 1; i <= k; ++i)
                {
                    cout << x << " ";
                }
            }
        }
        cout << endl;
    }
    return 0;
}