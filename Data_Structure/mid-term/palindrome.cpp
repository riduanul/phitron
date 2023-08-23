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
}
void reverse(Node *&head, Node *cur)
{
    if (cur->next == NULL)
    {
        head = cur;
        return;
    }
    reverse(head, cur->next);
    cur->next->next = cur;
    cur->next = NULL;
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
int main()
{
    Node *head = NULL;
    Node *head1 = NULL;
    Node *tail = NULL;
    Node *tail1 = NULL;
    while (true)
    {
        int val;
        cin >> val;
        if (val == -1)
            break;
        insert_tail(head, tail, val);
    }
    Node *temp = head;
    while (temp != NULL)
    {
        insert_tail(head1, tail1, temp->value);
        temp = temp->next;
    }

    reverse(head1, head1);

    temp = head;
    int flag = 1;
    Node *temp2 = head1;
    if (temp->next == NULL)
    {
        cout << "YES";
        return 0;
    }
    else
    {
        while (temp != NULL)
        {

            if (temp->value != temp2->value)
            {
                flag = 0;
                break;
            }
            temp = temp->next;
            temp2 = temp2->next;
        }
    }
    if (flag == 1)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}