#include <bits/stdc++.h>
#define endl "\n"

using namespace std;

void faster()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

using ll = long long;

const int mod = 1e9 + 7;
const int MAXN = 100005;

struct Node {
    int key;
    Node *left;
    Node *right;
    Node(int item){
        key = item;
        left = NULL;
        right = NULL;
    }
};

int main()
{
    faster();
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> in(n + 1), pre(n + 1);
        
    }
    return 0;
}