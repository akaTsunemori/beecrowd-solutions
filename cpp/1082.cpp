#include <iostream>
#include <unordered_map>
#include <vector>
#include <stack>
#include <algorithm>

using namespace std;

class Graph
{
    public:
        int vertices;
        unordered_map<int, vector<int>> graph;

    void add_edge(int a, int b)
    {
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    void get_cycles(int vertex, bool visited[], vector<int>& connected)
    {
        visited[vertex] = true;
        connected.push_back(vertex);
        for (auto i: graph[vertex]) {
            if (!visited[i]) {
                get_cycles(i, visited, connected);
            }
        }
    }

    Graph get_transpose()
    {
        Graph new_graph;
        new_graph.vertices = vertices;
        for (auto i: graph) {
            for (auto j: i.second) {
                new_graph.add_edge(j, i.first);
            }
        }
        return new_graph;
    }

    void fill_stack(int vertex, bool visited[], stack<int>& stack)
    {
        visited[vertex] = true;
        for (auto i: graph[vertex]) {
            if (!visited[i]) {
                fill_stack(i, visited, stack);
            }
        }
        stack.push(vertex);
    }

    void get_sccs(vector<vector<int>>& result)
    {
        stack<int> stack;
        bool visited[vertices] = {false};
        for (int i = 0; i < vertices; i++) {
            if (!visited[i]) {
                fill_stack(i, visited, stack);
            }
        }
        Graph gr_transpose;
        gr_transpose = get_transpose();
        bool t_visited[vertices] = {false};
        int i;
        while (!stack.empty()) {
            i = stack.top();
            stack.pop();
            if (!t_visited[i]) {
                vector<int> connected;
                gr_transpose.get_cycles(i, t_visited, connected);
                sort(connected.begin(), connected.end());
                result.push_back(connected);
            }
        }
    }
};

int main()
{
    int n, count, vertices, connections;
    char a, b;
    cin >> n;
    for (count = 0; count < n; count++) {
        cin >> vertices >> connections;
        Graph gr;
        gr.vertices = vertices;
        for (connections; connections > 0; connections--) {
            cin >> a >> b;
            gr.add_edge((int)(a) - 97, int(b) - 97);
        }
        vector<vector<int>> result;
        gr.get_sccs(result);
        sort(result.begin(), result.end());
        cout << "Case #" << count + 1 << ":\n";
        for (auto i: result) {
            for (auto j: i) {
                cout << (char)(j + 97) << ',';
            }
            cout << '\n';
        }
        cout << result.size() << " connected components\n\n";
    }
    return 0;
}