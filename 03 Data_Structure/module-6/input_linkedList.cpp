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
void insert_at_tail(Node *&head, int v)
{
    Node *newNode = new Node(v);

    if (head == NULL)
    {
        head = newNode;
        cout << endl
             << endl
             << "Inserted at head " << endl
             << endl;
        return;
    }

    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    // temp akhon last node a
    temp->next = newNode;
    cout << endl
         << endl
         << "Inserted at Tail" << endl
         << endl;
}
void print_linked_list(Node *head)
{
    Node *temp = head;
    cout << endl;
    cout << "Your Linked List:";
    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }
    cout << endl
         << endl;
}
int main()
{
    Node *head = NULL;
    int val;
    while (true)
    {
        cout << "Insert Value:";
        cin >> val;
        if (val == -1)
            break;
        insert_at_tail(head, val);
    }
    print_linked_list(head);
    return 0;
}