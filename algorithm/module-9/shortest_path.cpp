#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
vector<int> adj[N];
bool visited[N];
int level[N];
int parent[N];

void bfs(int s) // 0(n+m)
{
    queue<int> q;
    q.push(s);
    visited[s] = true;
    level[s] = 0;
    parent[s] = -1;

    while (!q.empty())
    {
        int node = q.front();
        q.pop();

        for (int v : adj[node])
        {
            if (!visited[v])
            {
                q.push(v);
                visited[v] = true;
                level[v] = level[node] + 1;
                parent[v] = node;
            }
        }
    }
}

int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    int s, d;
    cin >> s >> d;

    bfs(s);
    cout << "distance:"
         << " " << level[d] << endl;

    // path finding 0(n)
    vector<int> path;
    int current = d;
    while (current != -1)
    {
        path.push_back(current);
        current = parent[current];
    }
    reverse(path.begin(), path.end());
    cout << "path:"
         << " ";
    for (int p : path)
    {
        cout << p << " ";
    }

    return 0;
}