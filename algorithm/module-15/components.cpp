#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
int dist[N];
bool visit[N];
vector<int> v[N];
vector<int> com;
void dfs(int s)
{
    dist[s] = 0;
    visit[s] = true;
    com.push_back(s);
    for (int c : v[s])
    {
        if (!visit[c])
        {
            dfs(c);
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

    int cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        if (!visit[i])
        {
            cnt++;
            dfs(i);
            for (int val : com)
            {
                cout << val << " ";
            }
            cout << endl;
            com.clear();
        }
    }
    cout << cnt << endl;
    return 0;
}