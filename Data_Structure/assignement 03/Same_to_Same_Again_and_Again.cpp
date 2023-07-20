#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n;
    cin >> m;
    stack<int> A;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        A.push(x);
    }
    queue<int> B;
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        B.push(x);
    }
    list<int> a;
    while (!A.empty())
    {
        a.push_back(A.top());
        A.pop();
    }
    list<int> b;
    while (!B.empty())
    {
        b.push_back(B.front());
        B.pop();
    }

    int flag = 1;
    while (!a.empty() && !b.empty())
    {
        if (a.size() != b.size())
        {
            flag = 0;
            break;
        }
        else
        {
            if (a.back() != b.front())
            {
                flag = 0;
                break;
            }
        }
        a.pop_back();
        b.pop_front();
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
