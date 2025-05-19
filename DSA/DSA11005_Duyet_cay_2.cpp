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

Node *buildTree(int inorder[], int levelOrder[], int start, int end, unordered_map<int, int> indexInorderMap, int &indexInorder)
{
    if (start > end)
        return NULL;

    int data =
        Node *root = new Node(data);
}

int main()
{
    faster();
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int inorder[n + 1], levelOrder[n + 1];
        for (int i = 1; i <= n; ++i)
        {
            cin >> inorder[i];
        }
        for (int i = 1; i <= n; ++i)
        {
            cin >> levelOrder[i];
        }
    }
    return 0;
}