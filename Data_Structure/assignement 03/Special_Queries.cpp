#include <bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin >> q;
    queue<string> s;
    while (q--)
    {
        int num;
        string name;
        cin >> num;
        if (num == 0)
        {
            cin >> name;
            s.push(name);
        }
        else
        {
            if (!s.empty())
            {
                cout << s.front() << endl;
                s.pop();
            }
            else
            {
                cout << "Invalid" << endl;
            }
        }
    }
    return 0;
}