#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
vector<int> adj[N];
bool visited[N];
int level[N];

void bfs(int s)
{
    memset(visited, false, sizeof(visited)); // Reset visited array
    memset(level, 0, sizeof(level));         // reset the level array;
    visited[s] = true;
    queue<int> q;
    q.push(s);
    while (!q.empty())
    {
        int node = q.front();
        q.pop();

        for (int n : adj[node])
        {
            if (!visited[n])
            {
                q.push(n);
                visited[n] = true;
                level[n] = level[node] + 1;
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
    }

    int k;
    cin >> k;
    bfs(0);
    int count = 0;
    for (int v : adj[k])
    {
        count++;
    }
    cout << count;
    return 0;
}