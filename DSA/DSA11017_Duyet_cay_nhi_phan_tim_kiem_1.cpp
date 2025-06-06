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

void add(Node *&root, int x)
{
    if (root == NULL)
    {
        root = new Node(x);
    }
    else
    {
        if (root->key > x)
        {
            add(root->left, x);
        }
        else
            add(root->right, x);
    }
}

void load(Node *root)
{
    if (root->left != NULL)
        load(root->left);
    if (root->right != NULL)
        load(root->right);
    cout << root->key << " ";
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
        Node *root = NULL;
        for (int i = 1; i <= n; ++i)
        {
            int x;
            cin >> x;
            add(root, x);
        }
        load(root);
        cout << endl;
    }
    return 0;
}