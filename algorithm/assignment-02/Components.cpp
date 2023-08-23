#include <bits/stdc++.h>
using namespace std;

const int N = 100005;
vector<int> adj[N];
bool visited[N];

void dfs(int u, int &count)
{
    visited[u] = true;
    count++;

    for (int v : adj[u])
    {
        if (!visited[v])
        {
            dfs(v, count);
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

    vector<int> components;

    memset(visited, false, sizeof(visited));
    for (int i = 0; i <= 1000; i++)
    {
        if (!visited[i])
        {
            int count = 0;
            dfs(i, count);
            if (count > 1)
            {
                components.push_back(count);
            }
        }
    }

    sort(components.begin(), components.end());

    for (int v : components)
    {
        cout << v << " ";
    }
    cout << endl;

    return 0;
}
