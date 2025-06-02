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

struct tasks
{
    int id, deadline, profit;
};

int cmp(tasks a, tasks b)
{
    return a.profit > b.profit;
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
        tasks task[n + 5];
        int max_dl = 0;
        for (int i = 1; i <= n; ++i)
        {
            cin >> task[i].id >> task[i].deadline >> task[i].profit;
            max_dl = max(max_dl, task[i].deadline);
        }
        sort(task + 1, task + n + 1, cmp);

        int max_profit = 0, cnt = 0;

        int vs[max_dl + 1];
        for (int i = 1; i <= n; ++i)
            vs[i] = 0;

        for (int i = 1; i <= n; ++i)
        {
            for (int j = task[i].deadline; j >= 1; --j)
            {
                if (!vs[j])
                {
                    vs[j] = 1;
                    ++cnt;
                    max_profit += task[i].profit;
                    break;
                }
            }
        }
        cout << cnt << " " << max_profit << endl;
    }
    return 0;
}