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

int m, k, n;

set<string> se;
vector<string> v;
vector<vector<int>> idx;
vector<vector<string>> ans;

int a[50];

void backtrack(int j){
    for(int i = a[j - 1] + 1; i <= n - k + j; ++i){
        a[j] = i;
        if(j == k){
            vector<int> tmp;
            for(int x = 1; x <= k; ++x){
                tmp.push_back(a[x]);
            }
            idx.push_back(tmp);
        }
        else backtrack(j + 1);
    }
}

int main()
{
    faster();
    cin >> m >> k;
    v.push_back(" ");
    for(int i = 1; i <= m; ++i){
        string s; cin >> s;
        se.insert(s);
    }
    for(string s : se) v.push_back(s);
    n = v.size() - 1;
    sort(v.begin(), v.end());
    backtrack(1);
    for(int i = 0; i < idx.size(); ++i){
        for(int j = 0; j < idx[i].size(); ++j){
            cout << v[idx[i][j]] << " ";
        }
        cout << endl;
    }
    return 0;
}