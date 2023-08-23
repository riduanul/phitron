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

void reversePrint(Node *root)
{
    if (root == NULL)
        return;

    queue<Node *> q;
    q.push(root);
    vector<int> v;
    while (!q.empty())
    {

        Node *curr = q.front();
        q.pop();

        v.push_back(curr->value);
        cout << curr->value << " ";

        if (curr->right)
            q.push(curr->right);
        if (curr->left)
            q.push(curr->left);
    }
    // reverse(v.begin(), v.end());
    cout << endl;
    while (!v.empty())
    {
        cout << v.back() << " ";
        v.pop_back();
    }
}

int main()
{
    Node *root = inputTree();
    reversePrint(root);
    return 0;
}
