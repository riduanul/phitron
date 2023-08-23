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
class myStack
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;
    void push(int v)
    {
        sz++;
        Node *newNode = new Node(v);
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
    void pop()
    {
        sz--;
        Node *delNode = tail;
        tail = tail->prev;
        delete delNode;
    }
    int top()
    {
        return tail->value;
    }
    int size()
    {
        return sz;
    }
    bool empty()
    {
        if (sz == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
class myQue
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;
    void push(int v)
    {
        sz++;
        Node *newNode = new Node(v);
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
    void pop()
    {
        sz--;
        if (head == NULL)
        {
            return;
        }
        Node *delNode = head;
        head = head->next;
        delete delNode;
    }
    int front()
    {
        return head->value;
    }
    int size()
    {
        return sz;
    }
    bool empty()
    {
        if (sz == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
int main()
{
    int n, m;
    cin >> n;
    cin >> m;

    myStack A;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        A.push(x);
    }
    myQue B;
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        B.push(x);
    }
    list<int> myStk;
    list<int> myQ;
    while (!A.empty())
    {
        myStk.push_back(A.top());
        A.pop();
    }
    while (!B.empty())
    {
        myQ.push_back(B.front());
        B.pop();
    }

    int flag = 1;
    if (myStk.size() != myQ.size())
    {
        flag = 0;
    }
    else
    {
        list<int>::iterator itStk = myStk.begin();
        list<int>::iterator itQ = myQ.begin();
        while (itStk != myStk.end() && itQ != myQ.end())
        {
            if (*itStk != *itQ)
            {
                flag = 0;
                break;
            }
            ++itStk;
            ++itQ;
        }
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