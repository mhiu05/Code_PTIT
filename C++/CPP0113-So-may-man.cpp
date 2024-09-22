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

int check(string s){
	if(s.size() <= 1) return 0;
	else{
		if(s[s.size() - 1] == '6' && s[s.size() - 2] == '8') return 1;
		else return 0;
	}
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		cout << check(s) << endl;
	}
	return 0;
}