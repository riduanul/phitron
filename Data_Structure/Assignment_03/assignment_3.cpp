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

int level_order(Node *root)
{
    if (root == NULL)
        return 0;

    queue<Node *> q;
    q.push(root);
    int mn = INT_MAX;
    int mx = INT_MIN;
    while (!q.empty())
    {

        Node *curr = q.front();
        q.pop();

        mn = min(mn, curr->value);
        mx = max(mx, curr->value);

        if (curr->left)
            q.push(curr->left);
        if (curr->right)
            q.push(curr->right);
    }
    cout << mx << " " << mn << endl;
}

int main()
{
    Node *root = inputTree();
    level_order(root);
    return 0;
}
