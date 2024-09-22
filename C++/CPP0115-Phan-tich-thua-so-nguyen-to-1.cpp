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

void tsnt(int n){
	for(int i = 2; i <= sqrt(n); ++i){
		if(n % i == 0){
			int cnt = 0;
			while(n % i == 0){
				++cnt;
				n /= i;
			}
			cout << i << " " << cnt << " ";
		}
	}
	if(n != 1) cout << n << " " << 1 << " ";
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		tsnt(n);
		cout << endl;
	}
	return 0;
}