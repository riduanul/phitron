#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  while(t--){
    int n, s;
    cin>>n>>s;
    int w[n], v[n];

    for(int i=0; i<n; i++){
        cin>>w[i]>>v[i];
    }

    int dp[n+1][s+1];
    for(int i=0; i<=s; i++){
        dp[0][i] = 0;
    }

    for(int i=1; i<=n; i++){

        for(int j=0; j<=s; j++){
            if(w[i-1] <= s){
                dp[i][j] = max(dp[i-1][j-w[i-1]]+v[i-1], dp[i-1][j]);
            }else{
                dp[i][j] = dp[i-1][j];
            }
        }
    }
    return dp[n][s];
  } 
    return 0;
}