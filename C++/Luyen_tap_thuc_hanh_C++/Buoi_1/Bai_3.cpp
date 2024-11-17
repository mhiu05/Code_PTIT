// Bài mua kem
#include <bits/stdc++.h>
#define fi first
#define se second
#define ms(a, n) memset(a, n, sizeof(a))
#define endl "\n"
#define PI 3.141592653589793238
using namespace std;

using ll = long long;

typedef pair<ll, ll> pl;
typedef vector<pl> vll;
typedef pair<ll, int> pi;
typedef vector<pi> vii;

const ll modi = 1000000007;
const int MAXN = 1e7 + 1;
struct IceCream
{
    ll price;
    ll quantity;
};

bool compare(IceCream a, IceCream b)
{
    return a.price < b.price;
}

int main()
{
    ll N, M;
    cin >> N >> M;

    vector<IceCream> iceCreams(N);

    for (int i = 0; i < N; i++)
    {
        cin >> iceCreams[i].price >> iceCreams[i].quantity;
    }

    sort(iceCreams.begin(), iceCreams.end(), compare);

    ll totalCost = 0;
    ll totalBought = 0;

    for (int i = 0; i < N && totalBought < M; i++)
    {
        long long canBuy = min(iceCreams[i].quantity, M - totalBought);
        totalCost += canBuy * iceCreams[i].price;
        totalBought += canBuy;
    }

    cout << totalCost << endl;
    return 0;
}
