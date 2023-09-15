#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll N = 1e5+5;
ll save[N];

ll fibo(int n){
    if(n<=1) return 1;
    //memoization
    if(save[n]!= -1){
        return save[n];
    }
    ll result = fibo(n-1) + fibo(n-2);
    save[n]=result;
    return save[n];
}
int main()
{
   int n;
   cin>>n;
  
   for(int i=0; i<=n; i++){
    save[i] = -1;
   }
    cout<<fibo(n)<<endl;
    return 0;
}