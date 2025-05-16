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

int cmp(pair<int, int> a, pair<int, int> b){
    if(a.second != b.second) return a.second < b.second;
    return a.first > b.first;
}

int main()
{
    faster();
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<pair<int, int>> v;
        for(int i = 1; i <= n; ++i){
            int x, y; cin >> x >> y;
            v.push_back({x, y});
        }
        sort(v.begin(), v.end(), cmp);
        int cnt = 1;
        int max_curr = v[0].second;
        for(int i = 1; i < v.size(); ++i){
            if(v[i].first >= max_curr){
                ++cnt;
                max_curr = v[i].second;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}