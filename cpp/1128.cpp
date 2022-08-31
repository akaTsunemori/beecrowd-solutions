#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

class Graph {
    public:
        int vertices;
        unordered_map<int, vector<int>> graph;

    void add_edge(int f, int t) {
        graph[f].push_back(t);
    }

    void dfs(int vertex, bool visited[]) {
        visited[vertex] = true;
        for (auto i: graph[vertex]) {
            if (!visited[i]) {
                dfs(i, visited);
            }
        }
    }

    Graph get_transposed() {
        Graph new_graph;
        new_graph.vertices = vertices;
        for (auto i: graph) {
            for (auto j: i.second) {
                new_graph.add_edge(j, i.first);
            }
        }
        return new_graph;
    }

    bool is_strongly_connected() {
        bool visited[vertices] = {false};
        dfs(0, visited);
        for (auto i: visited) {
            if (!i) {
                return false;
            }
        }
        bool t_visited[vertices] = {false};
        Graph new_graph;
        new_graph = get_transposed();
        new_graph.dfs(0, t_visited);
        for (auto i: t_visited) {
            if (!i) {
                return false;
            }
        }
        return true;
    }
};

int main()
{
    int n, m, v, w, p;
    while (true) {
        cin >> n >> m;
        Graph gr;
        gr.vertices = n;
        if (n == 0 && m == 0) {
            break;
        }
        for (m; m > 0; m--) {
            cin >> v >> w >> p;
            v--;
            w--;
            gr.add_edge(v, w);
            if (p == 2) {
                gr.add_edge(w, v);
            }
        }
        cout << gr.is_strongly_connected() << '\n';
    }
    return 0;
}