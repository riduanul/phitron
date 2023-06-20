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
void print_normal(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }
    cout << endl;
}
void print_reverse(Node *tail)
{
    Node *temp = tail;
    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->prev;
    }
    cout << endl;
}
void insert_at_position(Node *head, int pos, int value)
{
    Node *newNode = new Node(value);

    Node *temp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
    newNode->prev = temp;
    newNode->next->prev = newNode;
}
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
    head->prev = newNode;
    head = newNode;
}
int get_length(Node *head)
{
    Node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}
void insert_tail(Node *&head, Node *&tail, int value)
{
    Node *newNode = new Node(value);
    if (head == NULL)
    {
        head == newNode;
        tail == newNode;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = tail->next;
}
void delete_node(Node *head, int pos)
{
    Node *temp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        temp = temp->next;
    }
    Node *delete_node = temp->next;
    temp->next = temp->next->next;
    temp->next->prev = temp;
    delete delete_node;
}
void delete_tail(Node *&tail)
{
    Node *deleteNode = tail;
    tail = tail->prev;
    delete deleteNode;
    tail->next = NULL;
}
void delete_head(Node *&head)
{
    Node *deleteNode = head;
    head = head->next;
    head->prev = NULL;
}
int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *tail = c;

    head->next = a;
    a->prev = head;
    a->next = b;
    b->prev = a;
    b->next = c;
    c->prev = b;
    int pos;
    cin >> pos;

    // if (pos == 0)
    // {
    //     insert_head(head, tail, value);
    // }
    // else if (pos == get_length(head))
    // {
    //     insert_tail(head, tail, value);
    // }
    // else if (pos >= get_length(head))
    // {
    //     cout << "Invalid Postion" << endl;
    // }
    // else
    // {

    //     insert_at_position(head, pos, value);
    // }
    if (pos >= get_length(head))
    {
        cout << "invalid" << endl;
    }
    else if (pos == 0)
    {
        delete_head(head);
    }
    else if (pos == get_length(head) - 1)
    {

        delete_tail(tail);
    }
    else
    {

        delete_node(head, pos);
    }

    print_normal(head);
    print_reverse(tail);
    return 0;
}