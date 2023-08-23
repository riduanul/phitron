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
void print_list(Node *head)
{
    Node *temp = head;
    cout << "Your Linked List is:";
    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }

    cout << endl;
}
void insert_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
    cout << endl
         << endl
         << "Node Inserted" << endl;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    while (true)
    {
        cout << "Press 0 to Terminate The Program!" << endl;
        cout << "Press 1 to Insert Node To Tail!" << endl;
        cout << "Press 2 to See the Linked List" << endl;

        int val;
        cout << "Insert Value" << endl;
        cin >> val;
        if (val == 0)
            break;
        if (val == -1)
            break;
        insert_tail(head, tail, val);

        print_list(head);
    }
    return 0;
}