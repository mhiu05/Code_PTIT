#include <bits/stdc++.h>
#define fi first
#define se second
#define ms(a, n) memset(a, n, sizeof(a))
#define endl "\n"
using namespace std;

using ll = long long;

typedef pair<ll, ll> pl;
typedef vector<pl> vll;
typedef pair<int, int> pi;
typedef vector<pi> vii;

const int modi = 1000000007;
const ll modl = 1e18 + 7;

ll F[93];
void sieve()
{
	F[1] = 0;
	F[2] = 1;
	for (int i = 3; i <= 92; ++i)
	{
		F[i] = F[i - 1] + F[i - 2];
	}
}
int check(int x)
{
	for (int i = 1; i <= 92; ++i)
	{
		if (x == F[i])
			return 1;
	}
	return 0;
}
int main()
{
	sieve();
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		int a[n];
		for (int &x : a)
			cin >> x;
		for (int x : a)
		{
			if (check(x))
				cout << x << " ";
		}
		cout << endl;
	}
	return 0;
}