#include <bits/stdc++.h>
using namespace std;
const int N = 1e5+5;
int parent[N];
int parentLevel[N];

void dsu_set(int n){
   
    for(int i=1; i<=n; i++){
        parent[i]=-1;
        parentLevel[i]=0;
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
        if(parentLevel[leaderU] > parentLevel[leaderV]){
        // V Leader
        parent[leaderV] = leaderU;
    }else if(parentLevel[leaderU] < parentLevel[leaderV]){
        // U Leader
        parent[leaderU] = leaderV;
    }else{
        parent[leaderV] = leaderU;
        parentLevel[leaderU]++;
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