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
            if (l < node->value)
            {
                node->left = new Node(l);
            }
            else
            {
                break;
            }
        }
        else if (r != -1)
        {
            if (r > node->value)
            {
                node->right = new Node(r);
            }
            else
            {
                break;
            }
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
}

int main()
{
    Node *root = insert_tree();
    level_order(root);
    return 0;
}