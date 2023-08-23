#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> myList = {10, 20, 30, 40, 50, 60, 70};
    list<int> newList = {100, 200, 300, 400, 500};
    // list<int> newList(myList);
    // newList.assign(myList.begin(), myList.end());
    // myList.push_front(5);
    // myList.push_back(5);
    // myList.pop_front();
    // myList.pop_back();
    // myList.erase(next(myList.begin(), 2));
    // myList.insert(next(myList.begin(), 3), 100);
    // myList.insert(next(myList.begin(), 4), newList.begin(), newList.end());
    // myList.erase(next(myList.begin(), 2), next(myList.begin(), 5));
    // replace(myList.begin(), myList.end(), 30, 100);
    // for (int val : myList)
    // {
    //     cout << val << endl;
    // }
    auto it = find(myList.begin(), myList.end(), 60);
    cout << *it << endl;
    if (it == myList.end())
    {
        cout << "not found" << endl;
    }
    else
    {
        cout << "found" << endl;
    }
    return 0;
}