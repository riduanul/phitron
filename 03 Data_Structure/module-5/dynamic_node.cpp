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
int main()
{
    // Node head(10);
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *c = new Node(50);
    head->next = a;
    a->next = c;
    cout << head->value << endl;
    cout << head->next->next->next << endl;

    return 0;
}