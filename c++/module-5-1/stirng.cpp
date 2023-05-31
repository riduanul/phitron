#include<bits/stdc++.h>
using namespace std;

int main()
{
    // string s="Hello";
    // string s2="Hello";
    
    // if(s==s2){
    //     cout<<"same"<<endl;
    // }else{
    //     cout<<"not same"<<endl;

    // }
    // cout<<s.size()<<endl;
    // cout<<s.capacity()<<endl;
    // string a="oneklfsalfjdlsjflasflkds";// len == capacity;       
    // cout<<a.capacity()<<endl;
    // cout<<s.max_size();
    string s;
    cin>>s;
    s.resize(5);
    cout<<s<<endl;
    // s.clear();
    // cout<<s<<endl;
    if(s.empty()==true) cout<<"empty"<<endl;
    else cout<<"not empty"<<endl;

    return 0;
}