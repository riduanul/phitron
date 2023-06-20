#include <bits/stdc++.h>
using namespace std;
// Main Class
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
// Print Function
void print_linked_list(Node *head)
{
    Node *tmp = head;
    cout << "Your LinkedList is:";
    while (tmp != NULL)
    {
        cout << tmp->value << " ";
        tmp = tmp->next;
    }
    cout << endl
         << endl;
}
// Insert at tail function
void insert_at_tail(Node *&head, Node *&tail, int v)
{
    Node *newNode = new Node(v);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        cout << endl;
        cout << "Value Inserted At Head" << endl;
        return;
    }
    tail->next = newNode;
    tail = newNode;
    cout << endl
         << endl;
    cout << "Value Inserted At Tail" << endl
         << endl;
}
// Print length function
int linked_list_length(Node *head)
{
    Node *tmp = head;
    int length = 0;
    while (tmp != NULL)
    {
        length++;
        tmp = tmp->next;
    }
    cout << "Your LinkedList Length is:" << length << endl;
    return length;
};
// is duplicate function
void is_duplicate(Node *head)
{
    Node *tmp = head;
    int flag = 0;

    while (tmp->next != NULL)
    {
        if (tmp->value == tmp->next->value)
        {
            flag = 1;
        }
        tmp = tmp->next;
    }
    if (flag == 1)
    {
        cout << endl
             << "YES" << endl
             << endl;
        ;
    }
    else
    {
        cout << endl
             << "NO" << endl
             << endl;
    }
}
// middle value print function
void print_middle_node_value(Node *head)
{
    int length = linked_list_length(head);

    Node *tmp = head;

    if (length % 2 == 0)

    {

        for (int i = 0; i < (length / 2) - 1; i++)
        {
            cout << i << " " << endl;
            tmp = tmp->next;
        }
        cout << tmp->value << " " << tmp->next->value << endl;
    }
    else
    {
        for (int i = 0; i < length / 2; i++)
        {
            cout << i << " " << endl;
            tmp = tmp->next;
        }
        cout << tmp->value << endl;
    }
}
// is_sorted function
void is_sorted(Node *head)
{
    Node *tmp = head;
    int flag = 0;
    while (tmp->next != NULL)
    {
        if (tmp->value < tmp->next->value)
        {
            flag = 1;
        }
        else
        {
            flag = 0;
        }
        tmp = tmp->next;
    }
    if (flag == 1)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
};
int main()
{
    Node *head = NULL;
    Node *tail = head;
    while (true)
    {
        cout << "Option 0: Terminate" << endl;
        cout << "Option 1: Insert at Tail" << endl;
        cout << "Option 2: Print Your LinkedList" << endl;
        cout << "Option 3: Print Your LinkedList Length" << endl;
        cout << "Option 4: Print duplicate value or not" << endl;
        cout << "Option 5: Print Middle Node Value" << endl;
        cout << "Option 6: Print if list sorted in ascending order" << endl;

        int op;
        cin >> op;

        if (op == 0)
        {
            break;
        }
        if (op == 1)
        {

            int v;
            while (true)
            {
                cout << endl;
                cout << "Insert Value:" << endl;
                cin >> v;
                if (v == -1)
                    break;
                insert_at_tail(head, tail, v);
            }
        }
        if (op == 2)
        {
            cout << endl
                 << endl;
            print_linked_list(head);
            cout << endl
                 << endl;
        }
        if (op == 3)
        {
            linked_list_length(head);
        }
        if (op == 4)
        {
            is_duplicate(head);
        }
        if (op == 5)
        {
            print_middle_node_value(head);
        }
        if (op == 6)
        {
            is_sorted(head);
        }
    }
    return 0;
}