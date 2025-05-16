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

const int mod = 123456789;
const int MAXN = 100005;

ll binPow(ll x, ll n){
    if(n == 0) return 1;
    ll X = binPow(2, n / 2);
    if(n % 2 == 0) {
        return X % mod * X % mod % mod;
    }
    return (X % mod * X % mod) % mod * x % mod % mod;
}

int main()
{
    faster();
    int t; cin >> t;
    while(t--){
        ll n; cin >> n;
        cout << binPow(2, n - 1) << endl;
    }
    return 0;
}