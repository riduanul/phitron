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

int main()
{
    Node *head1 = NULL;
    Node *head2 = NULL;
    Node *tail1 = NULL;
    Node *tail2 = NULL;

    while (true)
    {
        int value;
        cin >> value;
        if (value == -1)
            break;
        insert_tail(head1, tail1, value);
    }
    while (true)
    {
        int value;
        cin >> value;
        if (value == -1)
            break;
        insert_tail(head2, tail2, value);
    }
    int flag = 1;
    if (get_length(head1) == get_length(head2))
    {
        Node *temp1 = head1;
        Node *temp2 = head2;
        while (temp1 != NULL && temp2 != NULL)
        {
            if (temp1->value != temp2->value)
            {
                flag = 0;
                break;
            }
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
    }
    else
    {

        flag = 0;
    }

    if (flag == 1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}