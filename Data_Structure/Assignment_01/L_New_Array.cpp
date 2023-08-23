#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v1(n);
    vector<int> v2(n);

    vector<int> c(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v1[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> v2[i];
    }

    c = v2;

    c.insert(c.end(), v1.begin(), v1.end());

    for (int i = 0; i < c.size(); i++)
    {
        cout << c[i];
        i != c.size() && cout << " ";
    }

    return 0;
}
