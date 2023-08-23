#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> myList = {10, 20, 30};
    cout << myList.max_size();
    myList.resize(10, 5);
    for (int val : myList)
    {
        cout << val << endl;
    }

    return 0;
}