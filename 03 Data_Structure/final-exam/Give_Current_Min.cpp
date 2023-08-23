// You will be given a list A of size N. Then you will be given Q queries, for each query there will be some commands. Commands are given below -

// 0 X -> Insert X into the list. Then print the current minimum value from the list.
// 1 -> Print the minimum value from the list.
// 2 -> Delete the minimum value from the list and print the current minimum value from the list.
// Note: If the list is empty and you can't print anything then you should print "Empty".

// Input Format

// First line will contain N.
// Second line will contain the list A of size N.
// Third line will contain Q.
// Next Q lines will contain the commands.
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    priority_queue<int, vector<int>, greater<int>> A;
    while (n--)
    {
        int x;
        cin >> x;
        A.push(x);
    }

    int q;
    cin >> q;
    while (q--)
    {
        int c;
        cin >> c;
        if (c == 0)
        {
            int x;
            cin >> x;
            A.push(x);
            cout << A.top() << endl;
        }
        else if (c == 1)
        {
            if (!A.empty())
            {
                cout << A.top() << endl;
            }
            else
            {
                cout << "Empty" << endl;
            }
        }
        else if (c == 2)
        {
            if (!A.empty())
            {
                A.pop();
                if (!A.empty())
                {
                    cout << A.top() << endl;
                }
                else
                {
                    cout << "Empty" << endl;
                }
            }
            else
            {
                cout << "Empty" << endl;
            }
        }
    }
    return 0;
}