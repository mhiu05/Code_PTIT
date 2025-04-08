#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
set<string> v;
int n, k;
void Try(vector<string> &ve, int start, int cnt, vector<string> &cur)
{
    if (cnt == k)
    {
        for (auto x : cur)
        {
            cout << x << " ";
        }
        cout << endl;
        return;
    }
    for (int i = start; i < ve.size(); i++)
    {
        cur.push_back(ve[i]);
        Try(ve, i + 1, cnt + 1, cur);
        cur.pop_back();
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    vector<string> ve;
    vector<string> cur;
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        v.insert(s);
    }
    for (auto x : v)
    {
        ve.push_back(x);
    }
    Try(ve, 0, 0, cur);
}