#include <bits/stdc++.h>
using namespace std;

int main()
{
    // vector<int> v;
    // int n;
    // cin >> n;
    // for (int i = 0; i < n; i++)
    // {
    //     int x;
    //     cin >> x;
    //     v.push_back(x);
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     cout << v[i] << " ";
    // }

    /// second type
    // int n;
    // cin >> n;
    // vector<int> v(n);
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> v[i];
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     cout << v[i] << " ";
    // }
    int a[4] = {12, 13, 14, 15};
    vector<int> v(a, a + 4);
    cout << v;
    return 0;
}