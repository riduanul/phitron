#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    stringstream ss;
    ss<<s;
    string word;
    int flag= 0;
    while(ss>>word){
        if(word == "Ratul"){
            flag=1;
            break;
        }else{
            flag=0;
        }
    }
    if(flag == 1){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    return 0;
}