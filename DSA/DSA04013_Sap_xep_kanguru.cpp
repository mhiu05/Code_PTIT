#include <bits/stdc++.h>
#define endl "\n"

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
        vector<int> a(n);
        for (int &x : a)
            cin >> x;

        sort(a.begin(), a.end());

        int i = 0, j = n / 2;
        int pairs = 0;

        while (i < n / 2 && j < n)
        {
            if (a[j] >= 2 * a[i])
            {
                pairs++;
                i++;
                j++;
            }
            else
                j++;
        }

        cout << n - pairs << endl;
    }
    return 0;
}
