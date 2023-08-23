#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++) //o of n complexity
    {
        cin>>a[i];
    }
    int s=0;
    for (int i = 0; i < n; i++) // o of n complexity
    {
        s+=a[i];
    }
    cout<<s<<endl;
        
        //0(n) complexity
    
    return 0;
}