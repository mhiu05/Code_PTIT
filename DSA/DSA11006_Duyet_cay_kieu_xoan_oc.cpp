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
        p = search(T->right, x);
    return p;
}

void add_left(Node *&T, int u, int v)
{
    Node *p = search(T, u);
    if (p == NULL)
    {
        T = new Node(u);
        T->left = new Node(v);
        return;
    }
    if (p->left != NULL)
        return;
    p->left = new Node(v);
}

void add_right(Node *&T, int u, int v)
{
    Node *p = search(T, u);
    if (p == NULL)
    {
        T = new Node(u);
        T->right = new Node(v);
        return;
    }
    if (p->right != NULL)
        return;
    p->right = new Node(v);
}

void spiral_order(Node *root)
{
    stack<Node *> st1, st2;
    st2.push(root);
    while (!st1.empty() || !st2.empty())
    {
        while (!st1.empty())
        {
            Node *p = st1.top();
            cout << p->key << " ";
            st1.pop();
            if (p->left != NULL)
                st2.push(p->left);
            if (p->right != NULL)
                st2.push(p->right);
        }
        while (!st2.empty())
        {
            Node *p = st2.top();
            cout << p->key << " ";
            st2.pop();
            if (p->right != NULL)
                st1.push(p->right);
            if (p->left != NULL)
                st1.push(p->left);
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
        for (int i = 1; i <= n; ++i)
        {
            int u, v;
            char x;
            cin >> u >> v >> x;
            if (x == 'L')
                add_left(root, u, v);
            else
                add_right(root, u, v);
        }
        spiral_order(root);
    }

    return 0;
}