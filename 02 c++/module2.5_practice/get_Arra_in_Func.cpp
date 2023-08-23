#include<bits/stdc++.h>
using namespace std;
int * func(int n){
    int * a = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    return a;
    
    
}
int main()
{
    int n;
    cin>>n;
    int * arr= func(n);
   for (int i = 0; i < n; i++)
   {
    cout<<arr[i]<<" ";
   }
   
    return 0;
}