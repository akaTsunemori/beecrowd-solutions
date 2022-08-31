#include <iostream>
#include <queue>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>

using namespace std;

unordered_map<string, vector<string>> graph;

void add_edge(string a, string b)
{
    graph[a].push_back(b);
    graph[b].push_back(a);
}

vector<string> bfs(string fr, string to) 
{
    unordered_set<string> visited;
    queue<vector<string>> queue;
    vector<string> aux, path;
    string curr_v;
    aux.push_back(fr);
    queue.push(aux);
    while (!queue.empty()) {
        path = queue.front();
        queue.pop();
        curr_v = path.back();
        if (visited.find(curr_v) == visited.end()) {
            visited.insert(curr_v);
            for (string nbr: graph[curr_v]) {
                vector<string> new_path(path);
                new_path.push_back(nbr);
                queue.push(new_path);
                if (nbr == to) {
                    return new_path;
                }
            }
        }
    }
    return aux;
}

int main()
{
    int p, l;
    cin >> p >> l;
    string a, b;
    for (int i = 0; i < l; i++) {
        cin >> a >> b;
        add_edge(a, b);
    }
    string entrance = "Entrada", cheese = "*", exit = "Saida";
    vector<string> route_1 = bfs(entrance, cheese);
    vector<string> route_2 = bfs(cheese, exit);
    int result = route_1.size() + route_2.size() - 2;
    cout << result << '\n';
    return 0;
}
