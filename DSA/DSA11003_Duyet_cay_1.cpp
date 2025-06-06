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

struct Node
{
    int key;
    Node *left;
    Node *right;
    Node(int item)
    {
        key = item;
        left = right = NULL;
    }
};

Node *build_tree(int inorder[], int preorder[], map<int, int> mp, int &idx, int start, int end)
{
    if (start > end)
        return NULL;

    int key = preorder[idx++];
    Node *root = new Node(key);

    int k = mp[key];

    root->left = build_tree(inorder, preorder, mp, idx, start, k - 1);

    root->right = build_tree(inorder, preorder, mp, idx, k + 1, end);

    return root;
}

void postorder(Node *root)
{
    if (root)
    {
        postorder(root->left);
        postorder(root->right);
        cout << root->key << " ";
    }
}

int main()
{
    faster();
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int inorder[n + 1], preorder[n + 1];
        map<int, int> mp;
        for (int i = 1; i <= n; ++i)
        {
            cin >> inorder[i];
            mp[inorder[i]] = i;
        }
        for (int i = 1; i <= n; ++i)
        {
            cin >> preorder[i];
        }

        int idx = 1;

        Node *root = build_tree(inorder, preorder, mp, idx, 1, n);
        postorder(root);
        cout << endl;
    }
    return 0;
}