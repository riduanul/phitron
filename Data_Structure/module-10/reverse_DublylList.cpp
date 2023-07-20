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
void reverse(Node *head, Node *tail)
{
    Node *i = head;
    Node *j = tail;
    while (i != j && i->next != j)
    {
        swap(i->value, j->value);
        i = i->next;
        j = j->prev;
    }
    swap(i->value, j->value);
}

void print_dlist(Node *head, Node *tail)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }
}
int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);
    Node *tail = d;
    head->next = a;
    a->prev = head;
    a->next = b;
    b->prev = a;
    b->next = c;
    c->prev = b;
    c->next = d;
    d->prev = c;

    print_dlist(head, head);
    reverse(head, tail);
    cout << endl;
    print_dlist(head, head);
    return 0;
}