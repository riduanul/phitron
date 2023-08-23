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
         << "Insert at Tail" << endl
         << endl;
}
void insert_at_position(Node *head, int pos, int val)
{
    Node *newNode = new Node(val);
    Node *tmp =  head;
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
        if (tmp == NULL)
        {
            cout << "Invalid Position" << endl;
            return;
        }
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
    cout << endl
         << endl
         << "Inserted at position " << endl
         << endl;
}
void insert_at_head(Node *&head, int val)
{
    Node *newNode = new Node(val);
    newNode->next = head;
    head = newNode;
    cout << endl
         << "Inserted at Head" << endl
         << endl;
}
void delete_position(Node *head, int pos)
{
    Node *temp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        temp = temp->next;
    }
    if (temp == NULL)
    {
        cout << "Invalid Position" << endl;
        return;
    }
    if (temp->next == NULL)
    {
        cout << "Invalid Position" << endl;
        return;
    }
    Node *deleteNode = temp->next;

    temp->next = temp->next->next;
    delete deleteNode;
    cout << "Node deleted";
}
void delete_head(Node *&head)
{
    if (head == NULL)
    {
        cout << "Head is not available" << endl;
        return;
    }
    Node *deleteNode = head;
    head = head->next;
    delete deleteNode;
    cout << endl
         << "Head Deleted" << endl
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
    while (true)
    {
        cout << "Option 1: Insert at Tail" << endl;
        cout << "Option 2: Print Your Node" << endl;
        cout << "Option 3: Insert At Any Position" << endl;
        cout << "Option 4: Insert At Head" << endl;
        cout << "Option 5: Delete From Position" << endl;
        cout << "Option 6: Delete Head" << endl;
        cout << "Option 7: Terminate" << endl;
        int op;
        cin >> op;
        if (op == 1)
        {
            cout << "Please Enter Value:";
            int v;
            cin >> v;
            insert_at_tail(head, v);
        }
        else if (op == 2)
        {
            print_linked_list(head);
        }
        else if (op == 3)
        {
            int pos, val;
            cout << "Insert Position:" << endl;
            cin >> pos;
            if (pos == 0)
            {
                insert_at_head(head, val);
            }
            else
            {
                cout << "Insert value:" << endl;
            }
            cin >> val;
            insert_at_position(head, pos, val);
        }
        else if (op == 4)
        {
            int val;
            cout << endl
                 << "Insert Value:";
            cin >> val;
            insert_at_head(head, val);
        }
        else if (op == 5)
        {
            int pos;
            cout << "Enter Position:" << endl
                 << endl;
            cin >> pos;
            if (pos == 0)
            {
                delete_head(head);
            }
            else
            {
                delete_position(head, pos);
            }
        }
        else if (op == 6)
        {
            delete_head(head);
        }
        else if (op == 7)
        {
            break;
        }
    }

    return 0;
}