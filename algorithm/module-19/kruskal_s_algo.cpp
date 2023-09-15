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

class Edge
{
    public:
    int a,b,w;
    Edge(int a, int b, int w){
        this->a = a;
        this->b = b;
        this->w = w;
    }   
};
vector<Edge> v;
vector<Edge> ans;
bool cmp(Edge a, Edge b){
    return a.w < b.w;
}

int main()
{
   int n,e;
   cin>>n>>e;
    dsu_set(n);
   while(e--){
    int a, b, w;
    cin>>a>>b>>w;
    v.push_back(Edge(a,b,w));
   }
    sort(v.begin(), v.end(), cmp);
    
    for(auto val : v){
    
        int a = val.a;
        int b = val.b;
        int c = val.w;
        
        int leaderA = dsu_find(a);
        int leaderB = dsu_find(b);
        
        if(leaderA == leaderB) continue;

        ans.push_back(val);
        
        dsu_union(a,b);
    }

    for(Edge val: ans){
        cout<<val.a<<" "<<val.b<<" "<<val.w<<endl;
    }


    return 0;
}