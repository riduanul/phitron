#include <bits/stdc++.h>
using namespace std;

int main()
{
    int number;
    cin >> number;

    vector<int> v;

    while (number != 1)
    {
        if (number % 2 == 0)
        {
            v.push_back(number / 2);
            number = v.back();
        }
        else
        {
            v.push_back(number * 2 + 1);
            number = v.back();
        }
    }
    v.push_back(1);
    for (int n : v)
    {
        cout << n << " ";
    }
    return 0;
}