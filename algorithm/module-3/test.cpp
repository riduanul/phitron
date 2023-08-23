#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v1(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v1[i];
    }
    int m;
    cin >> m;
    vector<int> v2(m);
    for (int i = 0; i < m; i++)
    {
        cin >> v2[i];
    }

    for (int i = 0; i < n + m; i++)
    {
        v1[i] = v2[i];
    }

    for (auto v : v1)
    {
        cout << v << " ";
    }
    cout << endl;
    for (auto v : v2)
    {
        cout << v << " ";
    }

    return 0;
}