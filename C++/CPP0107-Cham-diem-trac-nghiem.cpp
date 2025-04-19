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
	
	char s1[] = "ABBADCCABDCCABD";
	char s2[] = "ACCABCDDBBCDDBB";
	int t; cin >> t;
	while(t--){
		int x; cin >> x;
		int cnt = 0, k = 0;
		if(x == 101){
			for(int i = 1; i <= 15; ++i){
				char tmp; cin >> tmp;
				if(tmp == s1[k]) ++cnt; 
				++k;
			}
			cout << fixed << setprecision(2) << 10.0 * cnt / 15 << endl;
		}
		else if(x == 102){
			for(int i = 1; i <= 15; ++i){
				char tmp; cin >> tmp;
				if(tmp == s2[k]) ++cnt; 
				++k;
			}
			cout << fixed << setprecision(2) << 10.0 * cnt / 15 << endl;
		}
	}
	return 0;
}