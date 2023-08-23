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

void sort_list(Node *head)
{
    Node *temp = head;
    for (Node *i = head; i->next != NULL; i = i->next)
    {
        for (Node *j = i->next; j != NULL; j = j->next)
        {
            if (i->value < j->value)
            {
                swap(i->value, j->value);
            }
        }
    }
}
void get_mid(Node *head)
{
    int length = get_length(head);
    sort_list(head);
    Node *temp = head;
    if (length % 2 == 0)
    {
        for (int i = 1; i <= (length / 2) - 1; i++)
        {
            temp = temp->next;
        }
        cout << temp->value << " " << temp->next->value;
    }
    else
    {
        for (int i = 1; i <= length / 2; i++)
        {
            temp = temp->next;
        }
        cout << temp->value;
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

    get_mid(head);
    return 0;
}