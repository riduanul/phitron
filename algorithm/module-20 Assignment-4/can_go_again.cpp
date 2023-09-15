#include <bits/stdc++.h>
using namespace std;
class Edge{
    public:
    int a, b, w;
    Edge(int a, int b, int w){
        this->a = a;
        this->b = b;
        this->w = w;
    }
};

bool isNegativeCycle(vector<Edge> edges, vector<long long>& dist){

     for(int j=0; j<edges.size(); j++){
        Edge ed = edges[j];
        int a = ed.a;
        int b= ed.b;
        int w= ed.w;
        if(dist[a] != LLONG_MAX && dist[a] + w < dist[b]){
            dist[b] = dist[a] +w;
            if(j==n-1) return true;

        }

   }
   return false;
}
void bellman_ford(int s, int n, vector<Edge> edges,  vector<long long>& dist){
    dist[s] =0;
    for(int i=1; i<=n-1; i++){
        for(int j=0; j<edges.size(); j++){
            
            Edge edg = edges[j];
            
            int a = edg.a;
            int b = edg.b;
            int w = edg.w;

            if(dist[a] != LLONG_MAX && dist[a] + w < dist[b]){
                dist[b] = dist[a] + w;
            }
        }
    }
}
int main()
{
    int n, e;
    cin>>n>>e;
    vector<Edge> edges;

    while(e--){
        int a, b, w;
        cin>>a>>b>>w;
        edges.push_back(Edge(a, b, w));
    }

    vector<long long>dist(n+1, LLONG_MAX);

    int s, t;
    cin>>s>>t;
    bellman_ford(s, n, edges, dist);
    if(isNegativeCycle(edges, dist)){
        cout<<"Negative Cycle Detected"<<endl;
    } else{
    
    while(t--){
        int d;
        cin>>d;
        
        
        if(dist[d] == LLONG_MAX){
            cout<<"Not Possible"<<endl;
        }else{
            cout<<dist[d]<<endl;
          }
        }
    
}

    

    return 0;
}