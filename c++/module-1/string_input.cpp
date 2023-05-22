#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    char a[100];
    // cin>>a;
    cin.getline(a,100)>>a;
    cout<<strlen(a);
    return 0;
}