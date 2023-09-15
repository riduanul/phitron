#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
int n, m;
bool visit[N];
vector<int> cmp;
vector<int> v[N];
void dfs(int s)
{
    visit[s] = true;
    cmp.push_back(s);
    for (int child : v[s])
    {
        if (!visit[child])
        {
            dfs(child);
        }
    }
}
int main()
{
    cin >> n >> m;
    while (m--)
    {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }

    vector<int> comp;
    for (int i = 1; i <= n; i++)
    {
        if (!visit[i])
        {
            comp.push_back(i);
            dfs(i);
        }
    }
    cout << comp.size() - 1 << endl;
    for (int i = 0; i < comp.size() - 1; i++)
    {
        cout << comp[i] << " " << comp[i + 1] << endl;
    }
    return 0;
}