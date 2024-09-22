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

int prime[1000000];
void sieve(){
	for(int i = 0; i <= 1000000; ++i){
		prime[i] = 1;
	}
	prime[0] = prime[1] = 0;
	for(int i = 2; i <= sqrt(1000000); ++i){
		for(int j = i * i; j <= 1000000; j += i){
			prime[j] = 0;
		}
	}
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	sieve();
	int a, b; cin >> a >> b;
	if(a < b){
		for(int i = a + 1; i < b; ++i){
			if(prime[i]) cout << i << " ";
		}
	}
	else{
		for(int i = b + 1; i < a; ++i){
			if(prime[i]) cout << i << " ";
		}
	}
	return 0;
}