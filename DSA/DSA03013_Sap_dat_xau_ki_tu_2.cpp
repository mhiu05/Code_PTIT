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
    int t; cin >> t;
    while(t--){
        int d; cin >> d;
        string s; cin >> s;
        int cnt[256] = {0};
        for(char c : s) cnt[c]++;
        int x = *max_element(cnt, cnt + 256);
        if((d - 1) * (x - 1) + x <= s.size()) cout << 1 << endl;
        else cout << -1 << endl; 
    }
    return 0;
}