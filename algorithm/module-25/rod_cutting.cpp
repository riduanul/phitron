#include <bits/stdc++.h>
using namespace std;
const int N = 1000;
int dp[N][N];
int unbounded_knap(int n, int s, int val[], int w[]){
    
    if(n == 0 || s == 0) return 0;
    if(dp[n][s] != -1) return dp[n][s];
    if(w[n-1] <= s){
        return dp[n][s] = max(unbounded_knap(n, s-w[n-1], val, w)+val[n-1], unbounded_knap
        (n-1,s,val,w));
    }else{

    return dp[n][s] =unbounded_knap(n-1, s, val, w);
    }
}
int main()
{
  int n;
  cin>>n;
  int v[n],w[n];
    for(int i=0; i<n; i++){
        cin>>v[i];
        w[i] = i+1;
    }

    for(int i=0;i<=n; i++){
        for(int j=0; j<=n; j++){
            dp[i][j] = -1;
        }
    }
    cout<<unbounded_knap(n, n, v, w)<<endl;

    return 0;
}