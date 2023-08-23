#include <bits/stdc++.h>
using namespace std;
long long int INF = 1e18;
const int N = 1e5 + 5;
vector<pair<int, int>> adj[N];
long long int d[N];
int nodes, edges;
bool visited[N];
int parent[N];
void dijkstra(int src)
{
    for (int i = 1; i <= nodes; i++)
    {
        d[i] = INF;
    }

    d[src] = 0;
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push({d[src], src});

    while (!pq.empty())
    {
        pair<int, int> node = pq.top();
        pq.pop();
        int selectedNode = node.second;
        if (visited[selectedNode])
            continue;
        visited[selectedNode] = true;

        for (auto child : adj[selectedNode])
        {
            int edgeCost = child.first;
            int v = child.second;

            if (d[v] > d[selectedNode] + edgeCost)
            {
                d[v] = d[selectedNode] + edgeCost;
                pq.push({d[v], v});
                parent[v] = selectedNode;
            }
        }
    }
}
int main()
{
    cin >> nodes >> edges;

    for (int i = 0; i < edges; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;

        adj[u].push_back({w, v});
        adj[v].push_back({w, u});
    }

    int src = 1;
    dijkstra(src);

    if (!visited[nodes])
    {
        cout << -1 << endl;
        return 0;
    }

    int current = nodes;
    vector<int> path;
    while (true)
    {
        path.push_back(current);
        if (current == src)
        {
            break;
        }
        current = parent[current];
    }
    reverse(path.begin(), path.end());
    for (auto v : path)
    {
        cout << v << " ";
    }
    return 0;
}