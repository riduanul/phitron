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

bool perfect(Node *root)
{
    if (root == NULL)
        return true;

    if (root->left == NULL && root->right == NULL)
        return true;

    if (root->left == NULL || root->right == NULL)
        return false;

    return perfect(root->left) && perfect(root->right);
}

int main()
{
    Node *root = inputTree();

    bool ans = perfect(root);

    if (ans)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}
