#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int value;
    Node *next;
    Node(int val)
    {
        this->value = val;
        this->next = NULL;
    }
};
void insert_tail(Node *&head, Node *&tail, int value)
{
    Node *newNode = new Node(value);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

int main()
{
    Node *head1 = NULL;
    Node *head2 = NULL;
    Node *tail1 = NULL;
    Node *tail2 = NULL;

    while (true)
    {
        int value;
        cin >> value;
        if (value == -1)
            break;
        insert_tail(head1, tail1, value);
    }
    while (true)
    {
        int value;
        cin >> value;
        if (value == -1)
            break;
        insert_tail(head2, tail2, value);
    }
    int flag = 0;
    for (Node *i = head1; i != NULL; i = i->next)
    {
        for (Node *j = head2; j != NULL; j = j->next)
        {
            if (i->value == j->value)
            {
                flag = 1;
            }
            else
            {
                flag = 0;
            }
        }
    }

    if (flag == 1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}