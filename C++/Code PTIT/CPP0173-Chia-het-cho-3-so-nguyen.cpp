#include <bits/stdc++.h>
#define fi first
#define se second
#define ms(a, n) memset(a, n, sizeof(a))
#define endl "\n"
using namespace std;

using ll = long long; 

typedef pair <ll, ll> pl;
typedef vector <pl> vll;
typedef pair <int, int> pi;
typedef vector <pi> vii;

const int modi = 1000000007;
const ll modl = 1e18 + 7;

ll lcm(ll a, ll b){
	return a / __gcd(a, b) * b;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int t; cin >> t;
	while(t--){
		ll x, y, z, n; cin >> x >> y >> z >> n;
		ll tmp = lcm(lcm(x, y), z);
		ll k = 1ll * pow(10, n - 1);
		ll limit = 1ll * pow(10, n);
		ll kq = tmp * ((k + tmp - 1) / tmp);
		if(kq < limit) cout << kq << endl;
		else cout << -1 << endl;
	}
    return 0;
}

