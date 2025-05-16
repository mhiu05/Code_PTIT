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

int n, k;
int a[10005];

int cmp(int a, int b){
    return abs(a - k) < abs(b - k);
}

int main()
{
    faster();
    int t; cin >> t;
    while(t--){
        cin >> n >> k;
        for(int i = 0; i < n; ++i){
            cin >> a[i];
        }
        stable_sort(a, a + n, cmp);
        for(int i = 0; i < n; ++i) cout << a[i] << " ";
        cout << endl;
    }
    return 0;
}