#include <bits/stdc++.h>
using namespace std;

int unbounded_knap(int n, int s, int val[], int w[]){
    
    if(n == 0 || s == 0) return 0;
    if(w[n-1] <= s){
        int ch1 = val[n-1] + unbounded_knap(n, s-w[n-1], val, w) ;
        int ch2 = unbounded_knap(n-1, s, val, w);
        return max(ch1, ch2);
    }else{

    return unbounded_knap(n-1, s, val, w);
    }
}
int main()
{
    int n,s;
    cin>>n>>s;
    int val[n], w[n];

    for(int i=0; i<n; i++){
        cin>>val[i];
    }
    for(int i=0; i<n; i++){
        cin>>w[i];
    }


   cout<<unbounded_knap(n,s,val,w);
    return 0;
}