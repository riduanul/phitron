#include <bits/stdc++.h>
using namespace std;

// heap is a representation of a complete binary tree
// Heap-> min heap -> max heap

int main()
{
    vector<int> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
        int cur_idx = v.size() - 1;
        while (cur_idx != 0)
        {
            int parent_idx = (cur_idx - 1) / 2;
            if (v[parent_idx] > v[cur_idx])
            {
                swap(v[parent_idx], v[cur_idx]);
                cur_idx = parent_idx;
            }
            else
            {
                break;
            }
        }
    }

    for (int val : v)
    {
        cout << val << " ";
    }
    return 0;
}