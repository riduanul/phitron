#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> myList;
    while (true)
    {
        int val;
        cin >> val;
        if (val == -1)
            break;
        int length = distance(myList.begin(), myList.end());
        if (length == 0)
        {
            myList.push_front(val);
        }
        else
        {
            myList.push_back(val);
        }
    }

    myList.sort();
    myList.unique();
    for (int val : myList)
    {
        cout << val << " ";
    }

    return 0;
}