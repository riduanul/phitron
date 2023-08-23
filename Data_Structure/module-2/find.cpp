#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>v={1,2,3,2,5,2,7,8,9,2,3,4,5};
    // vector<int>std::iterator it;

    auto it = find(v.begin(), v.end(), 2 );
    
    
        if(it == v.end()) cout<<"Not Found";
        else cout<<*it;
    
    return 0;
}