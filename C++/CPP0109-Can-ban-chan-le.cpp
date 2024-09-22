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
	int odd = 0, even = 0;
	while(n){
		int x = n % 10;
		if(x % 2 == 0) ++even;
		else ++odd;
		n /= 10;
	}
	return even == odd;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int n; cin >> n;
	int cnt = 0;
	for(int i = (int)pow(10, n - 1); i < (int)pow(10, n); ++i){
		if(check(i)) {
			cout << i << " ";
			++cnt;
		}
		if(cnt % 10 == 0) cout << endl;
	}
	return 0;
}