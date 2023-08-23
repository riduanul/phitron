#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 5;
vector<int> adj[N];
bool visited[N];
void dsf(int u)
{
    visited[u] = true;

    for (int v : adj[u])
    {
        if (!visited[v])
        {
            dsf(v);
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
    }
    int k;
    cin >> k;
    memset(visited, false, sizeof(visited));
    dsf(k);
    int houses = 0;
    for (int i = 0; i < n; i++)
    {
        if (k < 0 || k >= n)
        {
            continue;
        }
        else if (visited[i])
        {
            houses++;
        }
    }
    cout << houses - 1;

    return 0;
}