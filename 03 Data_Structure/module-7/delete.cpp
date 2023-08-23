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
void delete_node(Node *head, int pos)
{
    Node *temp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        temp = temp->next;
    }
    /* Akhon temp positioner thik ager node a .
    ager node postioner nodetir address royeche seti delete_node
    a rekhe dilam. abong oi node tir next a positioner porer node er address rakhlam
    */
    Node *delete_node = temp->next;
    temp->next = temp->next->next;
    delete delete_node;
}
void print_linked_list(Node *head)
{
    Node *tmp = head;
    cout << "Your Link List Is: ";
    while (tmp != NULL)
    {
        cout << tmp->value << " ";
        tmp = tmp->next;
    }
    cout << endl;
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
    a->next = b;
    b->next = c;
    c->next = d;

    print_linked_list(head);
    int pos;
    cin >> pos;
    delete_node(head, pos);
    print_linked_list(head);

    return 0;
}