#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arA[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arA[i];
    }
    int m;
    cin>>m;
    int arB[m];
    for (int i = 0; i <m; i++)
    {
        arB[i]==arA[i];

    }
   
  
    for (int i = n; i <m; i++)
    {
        cin>>arB[i];
    }
    for (int i = 0; i <m; i++)
    {
        cout<<arB[i]<<" ";
        }

    

    
    return 0;
}