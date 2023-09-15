#include <bits/stdc++.h>
using namespace std;

int parent[1000];
int parentSize[1000];

void dsu_set(int n){
   
    for(int i=1; i<=n; i++){
        parent[i]=-1;
        parentSize[i]=1;
    }
}

int dsu_find(int node){
    
    while(parent[node] != -1){
        node = parent[node];
    }
    
    return node;
}

void dsu_union(int u, int v){
    
    int leaderU = dsu_find(u);
    int leaderV = dsu_find(v);
   
    if(leaderU != leaderV){
        if(parentSize[leaderU] > parentSize[leaderV]){
        // V Leader
        parent[leaderV] = leaderU;
        parentSize[leaderU] += parentSize[leaderV];
    }else{
        // U Leader
        parent[leaderU] = leaderV;
        parentSize[leaderV] += parentSize[leaderU];
    }
    }
}

int main()
{
    int n,e;
    cin>>n>>e;
   dsu_set(n);
    while(e--){
        
        int u,v;
        cin>>u>>v;

        dsu_union(u,v);
    }
    cout<<dsu_find(5);
    return 0;
}