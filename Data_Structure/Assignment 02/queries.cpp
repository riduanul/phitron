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
void insert_head(Node *&head, Node *&tail, int value)
{
    Node *newNode = new Node(value);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head = newNode;
}
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
void print_list(Node *head, Node *tail)
{
    Node *temp = head;

    cout << head->value << " " << tail->value << endl;
    temp = temp->next;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int queries;
    cin >> queries;
    while (queries--)
    {
        int pos, value;
        cin >> pos >> value;
        if (pos == 0)
        {
            insert_head(head, tail, value);
            print_list(head, tail);
        }
        if (pos > 0)
        {
            insert_tail(head, tail, value);
            print_list(head, tail);
        }
    }

    return 0;
}