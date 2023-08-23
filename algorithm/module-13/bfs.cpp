#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
int dist[N];
bool visit[N];
vector<int> v[N];
void bfs(int src)
{
    queue<int> q;
    q.push(src);
    visit[src] = true;
    dist[src] = 0;
    while (!q.empty())
    {
        int parent = q.front();
        q.pop();
        cout << parent << endl;
        for (int i = 0; i < v[parent].size(); i++)
        {
            int child = v[parent][i];
            if (visit[child] == false)
            {
                q.push(child);
                dist[child] = dist[parent] + 1;
                visit[child] = true;
            }
        }
    }
}
int main()
{
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }

    bfs(1);
    for (int i = 1; i <= n; i++)
    {
        cout << "Node " << i
             << ":" << dist[i] << endl;
    }
    return 0;
}