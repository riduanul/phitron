#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
vector<pair<int, int>> v[N];
int dist[N];

// Dijkstra algoritm
void dijkstra(int s)
{
    queue<int> q;
    q.push(s);
    dist[s] = 0;
 
    while (!q.empty())
    {
        int parent = q.front();
        q.pop();

        for (int i = 0; i < v[parent].size(); i++)
        {
            pair<int, int> child = v[parent][i];
            int childNode = child.first;
            int childCost = child.second;

            if (dist[parent] + childCost < dist[childNode])
            {
                dist[childNode] = dist[parent] + childCost;
                q.push(childNode);
            }
        }
    }
}

int main()
{
    int n, e;
    cin >> n >> e;

    // taking inputs
    while (e--)
    {
        int a, b, w;
        cin >> a >> b >> w;
        v[a].push_back({b, w});
        v[b].push_back({a, w});
    }

    // Every distance now sets as infinite
    for (int i = 1; i <= n; i++)
    {
        dist[i] = INT_MAX;
    }

    // calling the dijkstra algorithm
    dijkstra(1);

    // printing the shortest path
    for (int i = 1; i <= n; i++)
    {
        cout << "dist of " << i << ": ";
        cout << dist[i] << endl;
    }

    return 0;
}