#include <bits/stdc++.h>
using namespace std;
const int N = 1000;
int n, m;
char a[N][N];
int visit[N][N];
vector<pair<int, int>> path = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
bool isValid(int ci, int cj)
{
    if (ci >= 0 && ci < n && cj >= 0 && cj < m && a[ci][cj] != '#')
        return true;
    else
        return false;
}
void dfs(int si, int sj)
{
    visit[si][sj] = true;
    for (int i = 0; i < 4; i++)
    {
        pair<int, int> p = path[i];

        int ci = si + p.first;
        int cj = sj + p.second;

        if (isValid(ci, cj) && !visit[ci][cj])
        {
            dfs(ci, cj);
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

    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (!visit[i][j] && a[i][j] != '#')
            {
                cnt++;
                dfs(i, j);
            };
        }
    }

    cout << cnt << endl;

    return 0;
}