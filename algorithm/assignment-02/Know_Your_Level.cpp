#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
vector<int> adj[N];
bool visited[N];
int level[N];
void bfs(int s)
{

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
        adj[v].push_back(u);
    }

    int l;
    cin >> l;
    if (l == 0)
    {
        cout << 0;
        return 0;
    }
    bfs(0);
    int flag = 0;
    for (int i = 0; i < n; i++)
    {

        if (level[i] == l)
        {
            flag = 0;
            cout << i << " ";
        }
    }
    if (flag)
    {
        cout << -1;
    }
    return 0;
}