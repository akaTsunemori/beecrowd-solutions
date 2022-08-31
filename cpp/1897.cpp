#include <iostream>
#include <queue>
#include <unordered_map>

using namespace std;

int op(int a, int i)
{
    switch (i) {
        case 0:
            return a * 2;
        case 1:
            return a / 2;
        case 2:
            return a * 3;
        case 3:
            return a / 3;
        case 4:
            return a + 7;
        case 5:
            return a - 7;
    }
    return 0;
}

int bfs(int origin, int destination)
{
    if (origin == destination) {
        return 0;
    }
    unordered_map<int, int> graph;
    queue<int> queue;
    int vertex, new_vertex;
    queue.push(origin);
    graph[origin] = 0;
    while (!queue.empty()) {
        vertex = queue.front();
        queue.pop();
        for (int i = 0; i < 6; i++) {
            new_vertex = op(vertex, i);
            if (graph[new_vertex] == 0 && vertex != new_vertex) {
                queue.push(new_vertex);
                graph[new_vertex] = graph[vertex] + 1;
            }
        }
        if (graph[destination] > 0) {
            return graph[destination];
        }
    }
    return 0;
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << bfs(a, b) << '\n';
    return 0;
}