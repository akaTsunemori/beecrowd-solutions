#include <iostream>
#include <unordered_set>

using namespace std;

int v;
bool graph[50][50];
unordered_set<int> visited;

void clear()
{
    for (int i = 0; i < 50; i++) {
        for (int j = 0; j < 50; j++) {
            graph[i][j] = false;
        }
    }
    visited.clear();
}

void add_edge(int a, int b)
{
    graph[a][b] = true;
    graph[b][a] = true;
}

int dfs(int start) 
{
    int edges = 0;
    visited.insert(start);
    for (int i = 0; i < v; i++) {
        if (graph[start][i] && visited.find(i) == visited.end()) {
            edges += dfs(i) + 1;
        }
    }
    return edges;
}

int main()
{
    int n, a, fr, to, start;
    cin >> n;
    for (n; n > 0; n--) {
        cin >> start >> v >> a;
        
        for (int i = 0; i < a; i++) {
            cin >> fr >> to;
            add_edge(fr, to);
        }
        cout << 2 * dfs(start) << '\n';
        clear();
    }
    return 0;
}