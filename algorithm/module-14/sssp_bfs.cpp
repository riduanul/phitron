#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
vector<int> v[N];
bool visit[N];
int dist[N];
int prnt[N];
void bfs(int s)
{
    queue<int> q;
    q.push(s);
    dist[s] = 0;
    visit[s] = true;
    prnt[s] = -1;
    while (!q.empty())
    {
        int parent = q.front();
        q.pop();

        for (int child : v[parent])
        {
            if (!visit[child])
            {
                visit[child] = true;
                dist[child] = dist[parent] + 1;
                prnt[child] = parent;
                q.push(child);
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
        cout << dist[i] << endl;
    }
    int d;
    cin >> d;
    if (visit[d])
    {
        vector<int> path;
        int x = d;
        while (x != -1)
        {
            path.push_back(x);
            x = prnt[x];
        }
        reverse(path.begin(), path.end());
        cout << "Path of " << d << ": ";
        for (int val : path)
        {
            cout << val << " ";
        }
    }

    return 0;
}