#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 5;
vector<int> adj[N];
bool visited[N];
int level[N];
void bfs(int s)
{
    visited[s] = true;
    queue<int> q;
    q.push(s);
    level[s] = 0;
    while (!q.empty())
    {
        int node = q.front();
        q.pop();

        for (int v : adj[s])
        {
            if (!visited[v])
            {
                q.push(v);
                visited[v] = true;
                level[v] = level[s] + 1;
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
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    bfs(1);
    cout << level[5] << " ";

    return 0;
}