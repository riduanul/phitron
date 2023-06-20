#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<long long int> b(n);
    long long int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
        b[i] = sum;
    }

    for (int i = n - 1; i >= 0; i--)
    {
        cout << b[i] << endl;
    }

    return 0;
}