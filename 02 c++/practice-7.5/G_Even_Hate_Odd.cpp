#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
   
   
    int odd=0;
    int even =0;
    for (int i = 0; i < t; i++)
     {
        int n;
        cin>>n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        
        if(n % 2 == 0){
        for (int i = 0; i < n; i++)
        {
            if(a[i] % 2 == 0){
                even++;
            }else{
                odd++;
            }
            
        }
            if(odd == even){
                cout<<0<<endl;
            }else if(odd == n){

                cout<<odd/n<<endl;
            }
            else if(even == n){
                cout<<even/2<<endl;
            }else{
                cout<<odd-even<<endl;
            }
     
        }else{
           cout<<-1;
        }
    }
    
    return 0;
}