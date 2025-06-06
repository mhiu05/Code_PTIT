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

void solve(Node *root, set<int> &se, int cnt)
{
    if (root->left == NULL && root->right == NULL)
    {
        se.insert(cnt);
    }
    else
    {
        if (root->left != NULL)
            solve(root->left, se, cnt + 1);
        if (root->right != NULL)
            solve(root->right, se, cnt + 1);
    }
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
            cin >> u >> v;
            char x;
            cin >> x;
            if (x == 'L')
                add_left(root, u, v);
            else
                add_right(root, u, v);
        }
        set<int> se;
        solve(root, se, 0);
        if (se.size() == 1)
            cout << 1 << endl;
        else
            cout << 0 << endl;
    }
    return 0;
}