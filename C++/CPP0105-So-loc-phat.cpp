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

int check(int n){
	while(n){
		if(n % 10 != 6 && n % 10!= 8 && n % 10 != 0) return 0;
		n /= 10;
	}
	return 1;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		if(check(n)) cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;
}