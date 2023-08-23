// Prblm: You will be given a list A of size N. You need to sort those values in descending order and also you need to remove any duplicate values from the list and print the final outcome.
// input format
// First line will contain T, the number of test cases.
// The first line of every test case will contain N.
// The second line of every test case will contain the list A of size N.
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        list<int> a;
        int n;
        cin >> n;
        while (n--)
        {
            int v;
            cin >> v;

            a.push_back(v);
        }
        a.sort(greater<int>());
        a.unique();
        for (int v : a)
        {
            cout << v << " ";
        }
        cout << endl;
    }

    return 0;
}