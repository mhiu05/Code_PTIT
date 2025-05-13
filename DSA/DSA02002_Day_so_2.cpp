#include <bits/stdc++.h>
#define endl "\n"
#define second sc
#define first fi

using namespace std;

using ll = long long;

const int mod = 1e9 + 7;
const int MAXN = 1e6 + 1;

void faster()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

vector<vector<int>> ans;

void Try(vector<int> a, int n)
{
    if(n <= 1) return;
    vector<int> tmp;
    for(int i = 1; i < a.size(); ++i){
        tmp.push_back(a[i] + a[i - 1]);
    }
    ans.push_back(tmp);
    Try(tmp, n - 1);
}

int cmp(vector<int> a, vector<int> b){
    return a.size() < b.size();
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
        ans.clear();
        for (int i = 0; i < n; ++i) cin >> a[i];
        ans.push_back(a);
        Try(a, n);
        sort(ans.begin(), ans.end(), cmp);
        for(int i = 0; i < ans.size(); ++i){
            cout << "[";
            for(int j = 0; j < ans[i].size(); ++j){
                cout << ans[i][j];
                if(j != ans[i].size() - 1) cout << " ";
            }
            cout << "] ";
        }
        cout << endl;
    }
    return 0;
}