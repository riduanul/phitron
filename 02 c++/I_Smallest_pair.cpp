#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
     
    for (int i = 0; i < t; i++)
    {
        int min= INT_MAX;
        int n;
        cin>>n;
        int a[n];
        for (int j = 0; j < n; j++)
        {
            cin>>a[j];
        }
        for (int k = 0; k < n-1; k++)
        {
            for (int l = k+1; l <n; l++)
            {
                int sum=a[k] + a[l] + l - k;
                if(sum < min){
                    min = sum;
                }

            }
            
        }
        
        cout<<min<<endl;
    }
    
    return 0;
}