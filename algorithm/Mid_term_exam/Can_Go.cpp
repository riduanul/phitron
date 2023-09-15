#include <bits/stdc++.h>
using namespace std;
#define pi pair<int, int>
const int N = 1010;
const int INF = 1e9 + 10;
vector<int> dist(N, INF);
bool visit[N];
vector<pi> adj[N];

void bfs(int s)
{
    priority_queue<pi, vector<pi>, greater<pi>> pq;
    dist[s] = 0;
    pq.push({dist[s], s});
    while (!pq.empty())
    {
        pi parent = pq.top();
        pq.pop();

        int parentNode = parent.second;
        if (visit[parentNode])
            continue;
        visit[parentNode] = true;
        for (auto child : adj[parentNode])
        {
            int childNode = child.first;
            int childCost = child.second;
            if (dist[childNode] > dist[parentNode] + childCost)
            {
                dist[childNode] = dist[parentNode] + childCost;
                pq.push({dist[childNode], childNode});
            }
        }
    }
}

int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= m; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        adj[u].push_back({v, w});
        // adj[v].push_back({u, w});
    }

    int s;
    cin >> s;
    bfs(s);
   
    int t;
    cin >> t;
    while (t--)
    {
        int d, dc;
        cin >> d >> dc;

        if (dist[d] <= dc)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}