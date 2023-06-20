#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    long long int pre[n];
    pre[0] = a[0];
    for (int i = 1; i < n; i++)
    {
        pre[i] = a[i] + pre[i - 1];
    }
    // atao hote pare
    // int sum=0;
    // for (int i = 0; i < n; i++)
    // {
    //     sum += a[i];
    //     pre[i]=sum;
    // }

    while (q--)
    {
        long long sum = 0;

        int l, r;
        cin >> l >> r;
        l--;
        r--;
        if (l == 0)
        {
            sum = pre[r];
        }
        else
        {
            sum = pre[r] - pre[l - 1];
        }
        cout << sum << endl;
    }

    return 0;
}