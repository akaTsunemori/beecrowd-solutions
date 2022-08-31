#include <bits/stdc++.h>

using namespace std;

int MAX = 10001;
int graph[60][60];

bool is_valid_edge(int u, int v, bool mst[])
{
    if (u == v) {
        return false;
    }
    if ((mst[u] && mst[v]) || (!mst[u] && !mst[v])) {
        return false;
    }
    return true;
}

int prims(int vertices)
{
    bool in_mst[60] = {false};
    in_mst[0] = true;
    int edge_count = 0, min_cost = 0, min_w, a, b;
    while (edge_count < vertices - 1) {
        min_w = MAX;
        a = b = -1;
        for (int i = 0; i < vertices; i++) {
            for (int j = 0; j < vertices; j++) {
                if (graph[i][j] < min_w) {
                    if (is_valid_edge(i, j, in_mst)) {
                        min_w = graph[i][j];
                        a = i;
                        b = j;
                    }
                }
            }
        }
        if (a != -1 && b != -1) {
            edge_count++;
            min_cost += min_w;
            in_mst[a] = in_mst[b] = true;
        }
    }
    return min_cost;
}

int main()
{
    memset(graph, MAX, 60 * 60 * sizeof(int));
    int r, c, v, w, p;
    cin >> r >> c;
    for (int i = 0; i < c; i++) {
        cin >> v >> w >> p;
        v--;
        w--;
        graph[v][w] = p;
        graph[w][v] = p;
    }
    cout << prims(r) << '\n';
    return 0;
}
