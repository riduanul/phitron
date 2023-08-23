#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);
    v.push_back(60);
    v.push_back(70);
    v.push_back(80);
    v.push_back(90);
    // v.clear();
    v.resize(7);
    cout<<v.size()<<endl;
    v.resize(9);
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    
    // cout<<v.max_size()<<endl;
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;

    return 0;
}