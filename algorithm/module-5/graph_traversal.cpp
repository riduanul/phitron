#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
vector<int> adj[N];
bool visited[N];
int depth[N];
int height[N];
void dfs(int u)
{
    // section 1:actions just after entering a node u
    visited[u] = true;
    cout << "Visiting Node:" << u << endl;
    for (int v : adj[u])
    {
        // section 2: actions before entering a new neighbor
        if (visited[v] == true)
            continue;
        depth[v] = depth[u] + 1;
        dfs(v);
        height[v] = max(height[u], height[u] + 1);
        // section 3:actions after exiting a neighbor
    }

    // section 4:actions before exiting a node u
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

    // print
    //  for (int i = 1; i <= n; i++)
    //  {
    //      cout << "NOde" << i << ":";
    //      for (int j : adj[i])
    //      {
    //          cout << j << " ";
    //      }
    //      cout << endl;
    //  }

    return 0;
}