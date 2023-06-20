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

    int j = n - 1;
    for (int i = 0; i < j; i++)
    {
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
        j--;
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}