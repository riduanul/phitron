#include <bits/stdc++.h>
using namespace std;

int main()
{
    int node, edge;
    cin >> node >> edge;
    int adj[node + 1][node + 1];
    for (int i = 0; i <= node; i++)
    {
        for (int j = 0; j <= node; j++)
        {
            adj[i][j] = 0;
            if (i == j)
                adj[i][j] = 1;
        }
    }

    while (edge--)
    {
        int a, b;
        cin >> a >> b;

        adj[a][b] = 1;
        adj[b][a] = 1;
    }
    // print
    for (int i = 0; i <= node; i++)
    {
        for (int j = 0; j <= node; j++)
        {
            cout << adj[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}