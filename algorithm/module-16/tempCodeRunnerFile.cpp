#include <bits/stdc++.h>
using namespace std;

int main()
{
   int n, e;
   cin>>n>>e;
   int dist[n+1][n+1];
   for(int i=1; i<=n; i++){
    for(int j=1; j<=e; i++){
        dist[i][j] = INT_MAX;
        if(i==j) dis[i][j] =0;
    }

   }
   while(e--){
    int u, v, w;
    cin>>u>>v>>w;
    dist[u][v] = w;
   }
   for(i=1; i<=n; i++){
    for(int j=1; j<=n; j++){
        cout<<dist[i][j]<<" ";
    }
    cout<<endl;
   }
    return 0;
}