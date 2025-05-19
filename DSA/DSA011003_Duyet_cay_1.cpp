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
    int data;
    Node *left;
    Node *right;
    Node(int init)
    {
        data = init;
        left = NULL;
        right = NULL;
    }
};

void initNode(Node *root, int data)
{
    root->data = data;
    root->left = NULL;
    root->right = NULL;
}

Node *buildTree(int inorder[], int preorder[], int start, int end, unordered_map<int, int> &inorderIndexMap, int &preIndex)
{
    if (start > end)
        return NULL;

    int data = preorder[preIndex++];
    Node *root = new Node(data);

    int inIndex = inorderIndexMap[data];

    root->left = buildTree(inorder, preorder, start, inIndex - 1, inorderIndexMap, preIndex);
    root->right = buildTree(inorder, preorder, inIndex + 1, end, inorderIndexMap, preIndex);
    return root;
}

void postorder(Node *root)
{
    if (root)
    {
        postorder(root->left);
        postorder(root->right);
        cout << root->data << " ";
    }
}

int main()
{
    faster();
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int inorder[n + 1], preorder[n + 1];
        unordered_map<int, int> inorderIndexMap;

        for (int i = 1; i <= n; ++i)
        {
            cin >> inorder[i];
            inorderIndexMap[inorder[i]] = i;
        }
        for (int i = 1; i <= n; ++i)
        {
            cin >> preorder[i];
        }

        int preIndex = 1;
        Node *root = buildTree(inorder, preorder, 1, n, inorderIndexMap, preIndex);

        postorder(root);
        cout << endl;
    }
    return 0;
}