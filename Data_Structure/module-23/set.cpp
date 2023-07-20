#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<int> s;
    int n;
    cin >> n;
    while (n--) // nlogn
    {
        int x;
        cin >> x;
        s.insert(x); // o(logN)
    }

    // for (auto it = s.begin(); it != s.end(); it++)
    // {
    //     cout << *it << endl;
    // }
    if (s.count(100)) // 0(logN)
    {
        cout << "Yes" << endl;
        cout << s.count(100);
    }
    else
    {
        cout << "No" << endl;
    }
    return 0;
}