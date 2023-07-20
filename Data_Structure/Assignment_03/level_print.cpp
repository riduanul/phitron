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

Node *inputTree()
{
    int val;
    cin >> val;
    if (val == -1)
        return NULL;

    Node *root = new Node(val);
    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        Node *curr = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;

        if (l != -1)
        {
            curr->left = new Node(l);
            q.push(curr->left);
        }

        if (r != -1)
        {
            curr->right = new Node(r);
            q.push(curr->right);
        }
    }

    return root;
}

int level_order(Node *root, int x)
{
    if (root == NULL)
        return 0;

    queue<pair<Node *, int>> q;
    q.push({root, 0});
    bool flag = false;
    while (!q.empty())
    {

        pair<Node *, int> curr = q.front();
        Node *node = curr.first;
        int level = curr.second;
        q.pop();
        if (level == x)
        {
            cout << node->value << " ";
            flag = true;
        }

        if (node->left)
            q.push({node->left, level + 1});
        if (node->right)
            q.push({node->right, level + 1});
    }
    if (!flag)
        cout << "Invalid";
}

int main()
{
    Node *root = inputTree();
    int x = 1;
    level_order(root, x);
    return 0;
}
