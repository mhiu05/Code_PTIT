#include<iostream>
#include<vector>
#include<algorithm>
#include<string.h>
using namespace std;
typedef long long ll;

int m, n; 
int a[101][101];
ll C[101][101];
void sieve(){
    for(int i = 0; i <= 100; ++i){
        for(int j = 0; j <= i; ++j){
            if(j == i) C[i][j] = 1;
            else if(j == 0) C[i][j] = 1;
            else C[i][j] = C[i - 1][j] + C[i - 1][j - 1];
        }
    }
}

int main() {
	int t; cin >> t;
    sieve();
	while (t--) {
		cin >> m >> n;
        for(int i = 1; i <= m; ++i){
            for(int j = 1; j <= n; ++j){
                cin >> a[i][j];
            }
        }
		cout << C[m + n - 2][m - 1] << endl;
	}

}