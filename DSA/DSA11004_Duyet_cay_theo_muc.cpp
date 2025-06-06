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
        left = NULL;
        right = NULL;
    }
};

Node *search(Node *T, int x)
{
    if (T == NULL)
        return NULL;
    if (T->key == x)
        return T;
    Node *p = search(T->left, x);
    if (p == NULL)
    {
        p = search(T->right, x);
    }
    return p;
}

void add_left(Node *&T, int u, int v)
{
    if (T == NULL)
    {
        T = new Node(u);
        T->left = new Node(v);
        return;
    }
    Node *p = search(T, u);
    if (p != NULL)
        p->left = new Node(v);
}

void add_right(Node *&T, int u, int v)
{
    if (T == NULL)
    {
        T = new Node(u);
        T->right = new Node(v);
        return;
    }
    Node *p = search(T, u);
    if (p != NULL)
        p->right = new Node(v);
}

void level_out(Node *root)
{
    if (root == NULL)
        return;
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        Node *p = q.front();
        q.pop();
        cout << p->key << " ";
        if ((p->left) != NULL)
        {
            q.push(p->left);
        }
        if ((p->right) != NULL)
        {
            q.push(p->right);
        }
    }
    cout << endl;
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

        for (int i = 0; i < n; ++i)
        {
            int u, v;
            char X;
            cin >> u >> v >> X;
            if (X == 'L')
                add_left(root, u, v);
            else
                add_right(root, u, v);
        }

        level_out(root);
    }
    return 0;
}