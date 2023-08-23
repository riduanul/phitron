#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
// vector<int> adjList[N]; unweighted
vector<pair<int, int>> adjList[N];
int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        adjList[u].push_back({v, w});
        adjList[v].push_back({u, w});
    }

    for (int i = 1; i <= n; i++)
    {
        cout << "List"
             << "-" << i << " "
             << ":"
             << " ";
        for (auto j : adjList[i])
        {
            cout << "(" << j.first << "," << j.second << ")";
        }
        cout << endl;
    }

    return 0;
}