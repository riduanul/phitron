#include<bits/stdc++.h>
using namespace std;

int main()
{
    char x;
    cin>>x;
    

    if(x >= 'a' && x <= 'z'){
        cout<<"ALPHA"<<endl<<"IS SMALL"<<endl;
    }else if(x >= 'A' && x <= 'Z'){
        cout<<"ALPHA"<<endl<<"IS CAPITAL"<<endl;
    }else{
        cout<<"IS DIGIT";
    }
    return 0;
}