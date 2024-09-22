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


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int t; cin >> t;
	while(t--){
		double x, y, z, t; cin >> x >> y >> z >> t;
		cout << fixed << setprecision(4) << sqrt((z - x) * (z - x) + (t - y) * (t - y)) << endl;
	}
	return 0;
}