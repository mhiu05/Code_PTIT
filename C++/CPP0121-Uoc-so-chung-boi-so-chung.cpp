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

int tcs (int n){
	int sum = 0;
	while(n){
		sum += n % 10;
		n /= 10;
	}
	return sum;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int t; cin >> t;
	while(t--){
		int a, b; cin >> a >> b;
		cout << 1ll * a * b / __gcd(a, b) << " " << __gcd(a, b) << endl;
	}
	return 0;
}