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
void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }
}
void insert_head(Node *&head, Node *&tail, int value)
{
    Node *newNode = new Node(value);
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
    newNode->prev = tail;
    tail = tail->next;
}
int length(Node *head)
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

void same_or_not(Node *head1, Node *head2)
{
    int len2 = length(head2);
    int len1 = length(head1);
    Node *temp = head1;
    bool flag = true;
    if (len1 == len2)
    {
        while (temp != NULL)
        {
            if (temp->value != head2->value)
            {
                flag = false;
                break;
            }
            temp = temp->next;
        }
    }
    else
    {
        cout << "NO" << endl;
    }

    if (flag == true)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
void reverse(Node *head, Node *tail)
{
    Node *i = head;
    Node *j = tail;
    while (i == j && i->next == j)
    {
        swap(i->value, j->value);
    }
    swap(i->value, j->value);
}
void isPalindrom(Node *head, Node *tail)
{
    Node *i = head;
    Node *j = tail;
    bool flag = true;
    while (i == j && i->next == j)
    {
        if (i->value != j->value)
        {
            flag = false;
            break;
        }
        i = i->next;
        j = j->prev;
    }
    if (i->value != j->value)
    {
        flag = false;
    }
    if (flag == true)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
void sort_list(Node *head)
{

    for (Node *i = head; i->next != NULL; i = i->next)

    {
        for (Node *j = i->next; j != NULL; j = j->next)
        {
            if (i->value > j->value)
            {
                swap(i->value, j->value);
            }
        }
    }
}
int main()
{
    Node *head1 = NULL;
    Node *head2 = NULL;
    Node *tail1 = NULL;
    Node *tail2 = NULL;

    while (true)
    {
        int op;
        cin >> op;
        if (op == 1)
        {
            while (true)
            {
                int value;
                cin >> value;
                if (value == -1)
                    break;
                insert_tail(head1, tail1, value);
            }
        }
        else if (op == 2)
        {
            while (true)
            {
                int value;
                cin >> value;
                if (value == -1)
                    break;
                insert_tail(head2, tail2, value);
            }
        }
        else if (op == 3)
        {
            same_or_not(head1, head2);
        }
        else if (op == 4)
        {
            reverse(head1, tail1);
        }
        else if (op == 5)
        {
            isPalindrom(head1, tail1);
        }
        else if (op == 6)
        {
            sort_list(head1);
        }
        print(head1);
        cout << endl;
        print(head2);
    }

    return 0;
}