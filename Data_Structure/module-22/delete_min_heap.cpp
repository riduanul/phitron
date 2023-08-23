#include <bits/stdc++.h>
using namespace std;
void insert_heap(vector<int> &v, int x)
{
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
void delete_heap(vector<int> &v)
{
    v[0] = v[v.size() - 1];
    v.pop_back();
    int cur = 0;
    while (true)
    {
        int l = cur * 2 + 1;
        int r = cur * 2 + 2;
        int l_idx = v.size() - 1;
        if (l <= l_idx && r <= l_idx)
        {
            if (v[l] <= v[r] && v[l] < v[cur])
            {
                swap(v[l], v[cur]);
                cur = l;
            }
            else if (v[r] <= v[l] && v[r] < v[cur])
            {
                swap(v[r], v[cur]);
                cur = r;
            }
            else
            {
                break;
            }
        }
        else if (l <= l_idx)
        {
            if (v[l] < v[cur])
            {
                swap(v[l], v[cur]);
                cur = l;
            }
            else
            {
                break;
            }
        }
        else if (r <= l_idx)
        {
            if (v[r] < v[cur])
            {
                swap(v[r], v[cur]);
                cur = r;
            }
            else
            {
                break;
            }
        }
        else
        {
            break;
        }
    }
}
void print_heap(vector<int> v)
{
    for (int val : v)
    {
        cout << val << " ";
    }
    cout << endl;
}
int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        insert_heap(v, x);
    }
    print_heap(v);
    delete_heap(v);
    print_heap(v);

    return 0;
}