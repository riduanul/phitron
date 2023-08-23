#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int value;
    Node *left;
    Node *right;

    Node(int val)
    {
        this->value = val;
        this->left = NULL;
        this->right = NULL;
    }
};
Node *insert_tree()
{
    int v;
    cin >> v;
    Node *root = new Node(v);

    queue<Node *> q;
    if (root)
        q.push(root);
    while (!q.empty())
    {
        Node *node = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;

        if (l != -1)
        {

            node->left = new Node(l);
            q.push(node->left);
        }
        if (r != -1)
        {
            node->right = new Node(r);
            q.push(node->right);
        }

        if (node->left)
            q.push(node->left);
        if (node->right)
            q.push(node->right);
    }
    return root;
}

void level_order(Node *root)
{
    queue<Node *> q;
    if (root)
        q.push(root);
    while (!q.empty())
    {
        Node *node = q.front();
        q.pop();

        cout << node->value << " ";
        if (node->left)
            q.push(node->left);
        if (node->right)
            q.push(node->right);
    }
    cout << endl;
}
bool search(Node *root, int x)
{
    if (root == NULL)
        return false;
    if (root->value == x)
        return true;

    if (x < root->value)
    {
        return search(root->left, x);
    }
    else
    {
        return search(root->right, x);
    }
}

void insert_in_bst(Node *&root, int x)
{
    if (root == NULL)
        root = new Node(x);
    return;
    if (root->value > x)
    {
        if (root->left == NULL)
        {
            root->left = new Node(x);
        }
        else
        {
            insert_in_bst(root->left, x);
        }
    }
    else
    {
        if (root->right == NULL)
        {
            root->right = new Node(x);
        }
        else
        {
            insert_in_bst(root->right, x);
        }
    }
}
Node *convert(int a[], int n, int l, int r)
{
    if (l > r)
        return NULL;
    int mid = (l + r) / 2;
    Node *root = new Node(a[mid]);
    Node *leftRoot = convert(a, n, l, mid - 1);
    Node *rightRoot = convert(a, n, mid + 1, r);
    root->left = leftRoot;
    root->right = rightRoot;
}

Node * subTree(Node *root, int x){
    if(root == NULL) return NULL;
    queue<int> q;
    if(root->value == x){
        q.push(root->value);
        q.push(root->left->value);
        q.push(root->right->value);
    }
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    Node *root = convert(a, n, 0, n - 1);

    level_order(root);
   

    return 0;
}
