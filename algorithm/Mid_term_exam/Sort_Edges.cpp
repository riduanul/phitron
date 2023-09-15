#include <bits/stdc++.h>
using namespace std;
priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int u, v;
        cin >> u >> v;
        pq.push({u, v});
    }

    while (!pq.empty())
    {
        pair<int, int> topValue = pq.top();
        cout << topValue.first << " " << topValue.second;
        pq.pop();
        cout << endl;
    }
    return 0;
}