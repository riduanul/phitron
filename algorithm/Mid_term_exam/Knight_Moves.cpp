#include <bits/stdc++.h>
using namespace std;

#define pi pair<int, int>
const int N = 105;
int level[N][N];
bool visited[N][N];
vector<pi> path = {{-2, 1}, {-2, -1}, {2, 1}, {2, -1}, {1, -2}, {1, 2}, {-1, 2}, {-1, -2}};

bool isValid(int ci, int cj, int n, int m)
{
    if (ci >= 0 && ci < n && ci >= 0 && ci < m)
        return true;
    else
        return false;
}

void bfs(int si, int sj, int n, int m)
{
    queue<pi> q;
    level[si][sj] = 0;
    visited[si][sj] = true;
    q.push({si, sj});
    while (!q.empty())
    {
        pi parent = q.front();
        int pii = parent.first;
        int pj = parent.second;
        q.pop();

        for (auto cpath : path)
        {
            int ci = pii + cpath.first;
            int cj = pj + cpath.second;
            if (isValid(ci, cj, n, m) && !visited[ci][cj])
            {
                q.push({ci, cj});
                level[ci][cj] = level[pii][pj] + 1;
                visited[ci][cj] = true;
            }
        }
    }
}

void reset_level_visit(int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            level[i][j] = 0;
            visited[i][j] = false;
        }
    }
}
int main()
{
    int testCase;
    cin >> testCase;

    while (testCase--)
    {
        int n, m;
        cin >> n >> m;

        for (int i = 0; i < n; i++)
        {
            int ki, kj;
            cin >> ki >> kj;
            bfs(ki, kj, n, m);
            int di, dj;
            cin >> di >> dj;
            cout << level[di][dj] << endl;

            reset_level_visit(n, m);
        }
    }
    return 0;
}