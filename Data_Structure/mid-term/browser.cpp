#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<string> myList;
    list<string>::iterator current;

    while (true)
    {
        int length = distance(myList.begin(), myList.end());
        string addresses;
        cin >> addresses;
        if (addresses == "end")
            break;
        if (length == 0)
        {

            myList.push_front(addresses);
        }
        else
        {
            myList.push_back(addresses);
        }
    }
    int q;
    cin >> q;
    while (q--)
    {
        string commend, address;
        cin >> commend;
        if (commend == "visit")
        {
            cin >> address;
            auto it = find(myList.begin(), myList.end(), address);
            if (it != myList.end())
            {
                current = it;
                cout << *it << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
        else if (commend == "next")
        {
            if (current != myList.end() && next(current) != myList.end())
            {
                ++current;
                cout << *current << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
        else if (commend == "prev")
        {
            if (current != myList.begin())
            {
                --current;
                cout << *current << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
    }
    return 0;
}