#include <bits/stdc++.h>
using namespace std;

#define pi pair<int, int>
const int N = 1005;
bool visit[N][N];
int dist[N][N];
int n, m;
vector<pi> path = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

bool isValid(int ci, int cj)
{
    if (ci >= 0 && ci < n && cj >= 0 && cj < m)
        return true;
    else
        return false;
}

void bfs(int si, int sj)
{
    queue<pi> q;
    q.push({si, sj});
    dist[si][sj] = 0;
    visit[si][sj] = true;

    while (!q.empty())
    {
        pi parent = q.front();
        q.pop();

        int pI = parent.first;
        int pJ = parent.second;

        for (int i = 0; i < 4; i++)
        {
            pi p = path[i];

            int ci = pI + p.first;
            int cj = pJ + p.second;

            if (isValid(ci, cj) && !visit[ci][cj])
            {
                visit[ci][cj] = true;
                q.push({ci, cj});
                dist[ci][cj] = dist[pI][pJ] + 1;
            }
        }
    }
}
int main()
{
    cin >> n >> m;
    char a[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }

    int si, sj;
    cin >> si >> sj;

    bfs(si, sj);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << dist[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}