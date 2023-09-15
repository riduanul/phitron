#include <bits/stdc++.h>
using namespace std;
#define pi pair<int, int>
const int N = 1000;
int n, m;
char a[N][N];
int visit[N][N];
vector<pair<int, int>> path = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
bool isValid(int ci, int cj)
{
    if (ci >= 0 && ci < n && cj >= 0 && cj < m && a[ci][cj] != '-')
        return true;
    else
        return false;
}
void bfs(int si, int sj)
{
    queue<pi> q;
    q.push({si, sj});
    visit[si][sj] = true;
    while (!q.empty())
    {
        pi parent = q.front();
        q.pop();
        int pI = parent.first;
        int pJ = parent.second;
        for (int i = 0; i < 4; i++)
        {
            pair<int, int> p = path[i];

            int ci = pI + p.first;
            int cj = pJ + p.second;

            if (isValid(ci, cj) && !visit[ci][cj])
            {
                bfs(ci, cj);
            }
        }
    }
}
int main()
{
    cin >> n >> m;
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
    int di, dj;
    cin >> di >> dj;

    if (visit[di][dj])
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}