#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int value;
    Node *next;
    Node(int value)
    {
        this->value = value;
        this->next = NULL;
    }
};
void print_list(Node *head)
{
    Node *temp = head;
    cout << endl;
    cout << "Your Linked List is:";
    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }
    cout << endl;
}
void insert_head(Node *&head, int value)
{
    Node *newNode = new Node(value);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    newNode->next = head;
    head = head->next;
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
void print_reverse(Node *head)
{
    Node *temp = head;
    if (temp == NULL)
        return;
    print_reverse(temp->next);
    cout << temp->value << " ";
}
void print_middle(Node *&head)
{
    int length = get_length(head);
    Node *temp = head;
    if (length % 2 == 0)
    {
        for (int i = 0; i < (length / 2) - 1; i++)
        {
            temp = temp->next;
        }
        cout << temp->value << " " << temp->next->value << endl;
    }
    else
    {
        for (int i = 0; i < (length / 2); i++)
        {
            temp = temp->next;
        }
        cout << temp->value << endl;
    }
}
int print_max(Node *head)
{
    Node *temp = head;
    int max = 0;
    while (temp->next != NULL)
    {
        if (temp->value < temp->next->value)
        {
            max = temp->next->value;
        }
        temp = temp->next;
    }
    return max;
}
void sort_list(Node *head)
{
    Node *temp = head;
    for (Node *i = temp; i->next != NULL; i = i->next)
    {
        for (Node *j = i->next; j != NULL; j = j->next)
        {
            if (i->value > j->value)
            {
                swap(i->value, j->value);
            }
        }
    }
    print_list(temp);
    cout << endl;
}
int main()
{
    Node *head1 = NULL;
    Node *head2 = NULL;
    Node *tail1 = NULL;
    Node *tail2 = NULL;

    while (true)
    {
        cout << "Press 0 To Terminate The Program" << endl;
        cout << "Press 1 To Insert  At Tail list-1" << endl;
        cout << "Press 2 To Insert at tail list-2" << endl;
        cout << "Press 3 To Print the list" << endl;
        cout << "Press 4 To Check Length is equal or not" << endl;
        cout << "Press 5 To Print Reverse" << endl;
        cout << "Press 6 To Print Middle Node" << endl;
        cout << "Press 7 To Print Max Node" << endl;
        cout << "Press 8 To Sort Linked List" << endl;
        int op;
        cin >> op;
        if (op == 0)
        {
            break;
        }
        if (op == 1)
        {
            int val;
            while (true)
            {
                cout << "Insert Value:";
                cin >> val;
                if (val == -1)
                    break;
                insert_tail(head1, tail1, val);
            }
        }
        if (op == 2)
        {
            int val;
            while (true)
            {
                cout << "Insert Value:";
                cin >> val;
                if (val == -1)
                    break;
                insert_tail(head2, tail2, val);
            }
        }
        if (op == 3)
        {
            print_list(head1);
            cout << endl;
            print_list(head2);
        }
        if (op == 4)
        {
            int list1 = get_length(head1);
            int list2 = get_length(head2);
            if (list1 == list2)
            {
                cout << endl
                     << "YES" << endl
                     << endl;
            }
            else
            {
                cout << endl
                     << "NO" << endl
                     << endl;
            }
        }
        if (op == 5)
        {
            print_reverse(head1);
            cout << endl;
        }
        if (op == 6)
        {
            print_middle(head1);
            cout << endl;
        }
        if (op == 7)
        {
            int mx_value = print_max(head1);

            cout << mx_value << endl;
        }
        if (op == 8)
        {
            sort_list(head1);
        }
    }
    return 0;
}