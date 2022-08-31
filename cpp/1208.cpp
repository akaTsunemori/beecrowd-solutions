#include <iostream>
#include <vector>

using namespace std;

int n, m;
vector<int> graph[1001], visited, match;

int dfs(int v)
{
    if (visited[v]) {
        return 0;
    }
    visited[v] = 1;
    for (int i = 0; i < graph[v].size(); i++) {
        int r = graph[v][i];
        if (match[r] == -1 || dfs(match[r])) {
            match[r] = v;
            return 1;
        }
    }
    return 0;
}

int main()
{
    cin.tie(0)->sync_with_stdio(false);
    int p, f;
    while (cin >> n >> m) {
        for (int i = 0; i < m; i++) {
            cin >> p >> f;
            graph[p].push_back(f + n);
        }
        int res = n;
        match.assign(2 * n + 1, -1);
        for (int i = 1; i <= n; i++) {
            visited.assign(n + 1, 0);
            res -= dfs(i);
        }
        cout << res << '\n';
        for (int i = 1; i <= n; i++) graph[i].clear();
    }
    return 0;
}