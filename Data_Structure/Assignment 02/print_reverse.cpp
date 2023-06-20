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

void get_reverse(Node *head)
{
    Node *temp = head;
    if (temp == NULL)
        return;
    get_reverse(temp->next);
    cout << temp->value << " ";
}
void print_list(Node *head)
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
    get_reverse(head);
    cout << endl;
    print_list(head);

    return 0;
}