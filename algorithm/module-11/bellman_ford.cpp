#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> pii;
const int N = 1e5 + 5;
const int INF = 1e9 + 7;
int dist[N];
int n, m;
vector<pii> g[N];
void bellman_ford(int s)
{
    for (int i = 1; i <= n; i++)
    {
        dist[i] = INF;
    }
    dist[s] = 0;
    for (int i = 1; i < n; i++)
    {
        for (int u = 1; u <= n; u++)
        {
            for (pii vpair : g[u])
            {
                int v = vpair.first;
                int w = vpair.second;

                if (dist[u] != INF && dist[v] > dist[u] + w)
                {
                    dist[v] = dist[u] + w;
                }
            }
        }
    }
}
int main()
{
    cin >> n >> m;
    while (m--)
    {
        int u, v, w;
        cin >> u >> v >> w;
        g[u].push_back({v, w});
    }

    bellman_ford(1);
    for (int i = 1; i <= n; i++)
    {
        cout << "Distance of " << i;
        cout
            << ": " << dist[i] << endl;
    }
    return 0;
}