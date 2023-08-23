#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int value;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->value = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }
}
void insert_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    tail->next = newNode;
    tail = newNode;
}

void sort_list(Node *&head)
{
    for (Node *i = head; i->next != NULL; i = i->next)
    {
        for (Node *j = i->next; j != NULL; j = j->next)
        {
            if (i->value > j->value)
            {
                swap(i->value, j->value);
            }
        }
    }
}
Node *remove_duplicate(Node *head)
{
    if (head == NULL || head->next == NULL)
        return head;
    Node *temp = head;
    while (temp != NULL && temp->next != NULL)
    {
        if (temp->value == temp->next->value)
        {
            Node *deleteNode = temp->next;
            temp->next = deleteNode->next;
            delete deleteNode;
        }
        else
        {
            temp = temp->next;
        }
    }
    return head;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    while (true)
    {
        int value;
        cin >> value;
        if (value == -1)
            break;
        insert_tail(head, tail, value);
    }
    sort_list(head);
    remove_duplicate(head);
    print(head);
    return 0;
}
