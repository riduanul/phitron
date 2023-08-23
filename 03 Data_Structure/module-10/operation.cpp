#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> myList = {10, 20, 30, 60, 40, 50, 10, 20, 30};
    // myList.remove(10);
    // myList.sort();
    // myList.sort(greater<int>());
    myList.sort();
    myList.unique();
    // myList.reverse();
    for (int val : myList)
    {
        cout << val << " ";
    }
    cout << endl;
    cout << *next(myList.begin(), 3) << endl;
    return 0;
}