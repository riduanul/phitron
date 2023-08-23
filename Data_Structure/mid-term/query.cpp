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
void insert_head(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
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
    newNode->prev = tail;
    tail = newNode;
}
void insert_position(Node *&head, int pos, int val)
{
    Node *newNode = new Node(val);
    Node *temp = head;
    for (int i = 1; i < pos; i++)
    {
        temp = temp->next;
    }
    temp->next->prev = newNode;
    newNode->next = temp->next;
    newNode->prev = temp;
    temp->next = newNode;
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
void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }
}
void print_reverse(Node *head)
{
    Node *temp = head;

    if (temp == NULL)
        return;
    print_reverse(temp->next);
    cout << temp->value
         << " ";
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int q;
    cin >> q;
    while (q--)
    {
        int pos, val;
        cin >> pos >> val;
        int length = get_length(head);
        if (length == 0 && pos > 0)
        {
            cout << "Invalid" << endl;
        }
        else if (pos > length)
        {
            cout << "Invalid" << endl;
        }
        else if (pos == 0)
        {
            insert_head(head, tail, val);
            cout << "L"
                 << " "
                 << "->"
                 << " ";
            print(head);
            cout << endl;
            cout << "R"
                 << " "
                 << "->"
                 << " ";
            print_reverse(head);
            cout << endl;
        }
        else if (pos == length)
        {
            insert_tail(head, tail, val);
            cout << "L"
                 << " "
                 << "->"
                 << " ";
            print(head);
            cout << endl;
            cout << "R"
                 << " "
                 << "->"
                 << " ";
            print_reverse(head);
            cout << endl;
        }
        else if (pos > 0 && pos < length)
        {
            insert_position(head, pos, val);
            cout << "L"
                 << " "
                 << "->"
                 << " ";
            print(head);
            cout << endl;
            cout << "R"
                 << " "
                 << "->"
                 << " ";
            print_reverse(head);
            cout << endl;
        }
    }
    return 0;
}