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
	
	int n; cin >> n;
	double s = 0;
	for(int i = 1; i <= n; ++i){
		s += 1.0 / i;
	}
	cout << fixed << setprecision(4) << s;
	return 0;
}