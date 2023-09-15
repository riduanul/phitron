#include <bits/stdc++.h>
using namespace std;

#define pi pair<int,int>
const int N= 1e5+5;

vector<pi> v[N];
bool visit[N];
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
vector<Edge> edgeList;
class Cpm
{
    public:
    bool operator()(Edge a, Edge b ){
        return a.w > b.w;
    }
};
int cnt =0;
void prims(int s, int n){
    priority_queue<Edge, vector<Edge>, Cpm> pq;
   pq.push(Edge(1,1,0));

    while(!pq.empty()){
        Edge parent = pq.top();
        pq.pop();
        
        int a = parent.a;
        int b = parent.b;
        int w = parent.w;

        if(visit[b]) continue;
        visit[b] = true;
        cnt++;
        edgeList.push_back(parent);

        for(int i = 0; i<v[b].size(); i++){
            pi child = v[b][i];
            

            if(!visit[child.first]){
                pq.push(Edge(b, child.first, child.second));
            }
        }

    }
    edgeList.erase(edgeList.begin());
    long long sum=0;
    for(Edge val: edgeList){
        sum+=(long long)(val.w);
    }

    if(cnt == n){
        cout<<sum<<endl;
    }else{
        cout<<"IMPOSSIBLE"<<endl;
    }
    
}

int main()
{
   int n,e;
   cin>>n>>e;
   while(e--){
    int a,b,w;
    cin>>a>>b>>w;

    v[a].push_back({b, w});
    v[b].push_back({a, w});


   }
    prims(1, n);
    return 0;
}