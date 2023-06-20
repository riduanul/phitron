#include <bits/stdc++.h>
using namespace std;

int main()
{

    int a, b, k;
    cin >> a;
    vector<int> v(a);

    for (int i = 0; i < a; i++)
    {
        cin >> v[i];
    }
    cin >> b;
    vector<int> v2(b);

    for (int i = 0; i < b; i++)
    {
        cin >> v2[i];
    }
    cin >> k;
    // replace(v.begin() + k, v.end(), v2.begin(), v2.end());
    for (int i = k; i < a; i++)

    {
        v[i] = v2[i - k];
    }

    for (int i = 0; i < a; i++)
    {
        cout << v[i] << endl;
    }

    return 0;
}