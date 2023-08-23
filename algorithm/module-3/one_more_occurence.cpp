#include <bits/stdc++.h>
using namespace std;

bool binarySearch(int arr[], int l, int r, int target)
{
    while (l < r)
    {
        int mid = (l + r) / 2;

        if (arr[mid] == target)
        {
            if (arr[mid] == arr[mid + 1] || arr[mid] == arr[mid - 1])
            {
                return true;
            }
        }
        else if (target > arr[mid])
        {

            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    return false;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int target;
    cin >> target;
    bool flag = binarySearch(arr, 0, n - 1, target);

    if (flag == true)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}