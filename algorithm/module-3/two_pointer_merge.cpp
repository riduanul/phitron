#include <bits/stdc++.h>
using namespace std;

void mergeSortedArray(int arr1[], int arr2[], int size1, int size2, int mergedArr[])
{
    int i = 0; // index for arr1
    int j = 0; // index for arr2
    int k = 0; // index for mergedArray

    // Merged the two arrays when both have elements
    while (i < size1 && j < size2)
    {
        if (arr1[i] >= arr2[j])
        {
            mergedArr[k] = arr1[i];
            i++;
        }
        else
        {
            mergedArr[k] = arr2[j];
            j++;
        }
        k++;
    }

    // If there are remaining elements in arra1 or arr2, add them to the merged array
    while (i < size1)
    {
        mergedArr[k] = arr1[i];
        i++;
        k++;
    }

    while (j < size2)
    {
        mergedArr[k] = arr2[j];
        j++;
        k++;
    }
}

int main()
{
    int n;
    cin >> n;
    int arr1[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    int m;
    cin >> m;
    int arr2[m];
    for (int i = 0; i < m; i++)
    {
        cin >> arr2[i];
    }
    int mergedArr[n + m];

    // call the mergeSortedArrays function
    mergeSortedArray(arr1, arr2, n, m, mergedArr);

    // Print the merged array
    for (int i = 0; i < n + m; i++)
    {
        cout << mergedArr[i] << " ";
    }

    return 0;
}