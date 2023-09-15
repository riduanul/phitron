#include <bits/stdc++.h>
using namespace std;
const int N = 1e5+5; 

int parent[N];
int parentSize[N];

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
class Edge{
    public:
    int a,b,w;
    Edge(int a, int b){
        this->a = a;
        this->b = b;
    }
};
vector<Edge> v;
int main()
{
    int n,e;
    cin>>n>>e;

    dsu_set(n);

    int count = 0;
    while(e--){
        int a,b;
        cin>>a>>b;
        v.push_back(Edge(a,b));
        int leaderA = dsu_find(a);
        int leaderB = dsu_find(b);

        if(leaderA == leaderB){
            count++;
        }
        dsu_union(a, b);
    }
    cout<<count<<endl;
    return 0;
}