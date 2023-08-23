#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
vector<int> adj[N];
bool visited[N];
int depth[N];
int height[N];

void dfs(int u)
{
    visited[u] = true;
    for (int v : adj[u])
    {
        if (visited[v] == true)
            continue;
        depth[v] = depth[u] + 1;
        dfs(v);
        height[u] = max(height[u], height[v] + 1);
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

    dfs(1);
    int d;
    cin >> d;
    cout << "Depth of"
         << " " << d
         << ":"
         << " " << depth[d] << endl;
    int h;
    cin >> h;
    cout << "Height of"
         << " " << h
         << ":"
         << " " << height[h];

    // for (int i = 1; i <= n; i++)
    // {
    //     cout << "Node"
    //          << " " << i << ":"
    //          << " ";
    //     for (int v : adj[i])
    //     {
    //         cout << v << " ";
    //     }
    //     cout << endl;
    // }

    return 0;
}