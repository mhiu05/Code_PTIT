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

ll gt(ll n){
	ll kq = 1;
	for(ll i = 1; i <= n; ++i){
		kq *= i;
	}
	return kq;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	ll n; cin>> n;
	ll kq = 0;
	for(ll i = 1; i <= n; ++i){
		kq += gt(i);
	}
	cout << kq;
	return 0;
}