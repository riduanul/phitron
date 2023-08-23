#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    getline(cin, str);

    stringstream ss;
    ss<<str;

    string word;
    ss>>word;
    reverse(word.begin(), word.end());
    cout<<word;
    while(ss>>word){
         reverse(word.begin(), word.end());
        cout<<" "<<word;
    }
    return 0;
}