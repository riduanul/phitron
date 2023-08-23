#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[5] = {10, 20, 30, 40, 50};
    vector<int> v = {60, 70, 80};
    list<int> myList2 = {1, 2, 3, 4, 5};
    // list<int> myList(a, a + 5);
    list<int> myList(v.begin(), v.end());

    for (int val : myList)
    {
        cout << val << endl;
    }
    return 0;
}