#include <bits/stdc++.h>
using namespace std;

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
    int flag = false;
    int l = 0;
    int r = n - 1;

    for (int i = 0; i < n; i++)
    {
        int mid = (l + r) / 2;
        if (arr[mid] == target)
        {
            cout << mid << endl;
            flag = true;
            break;
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
    if (flag == false)
    {
        cout << "Not found";
    }
    return 0;
}