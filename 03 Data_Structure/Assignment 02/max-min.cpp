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
void print_max_node(Node *head)
{
    Node *temp = head;
    int max = INT_MIN;
    int min = INT_MAX;
    while (temp != NULL)
    {
        if (temp->value > max)
        {
            max = temp->value;
        }
        if (temp->value < min)
        {
            min = temp->value;
        }

        temp = temp->next;
    }

    if (min == INT_MAX)
    {
        cout << max << " " << max << endl;
    }
    else
    {
        cout << max << " " << min << endl;
    }
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int value;
    while (true)
    {
        cin >> value;
        if (value == -1)
            break;
        insert_tail(head, tail, value);
    }

    print_max_node(head);
    return 0;
}