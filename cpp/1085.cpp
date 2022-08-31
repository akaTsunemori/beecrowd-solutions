#include <iostream>
#include <tuple>
#include <unordered_map>
#include <vector>
#include <queue>
#include <string>

#define INF 2147483647;

using namespace std;

typedef tuple<int, string, char> tp;
typedef unordered_map<string, vector<tp>> gr;
typedef priority_queue<tp, vector<tp>, greater<tp>> pr_qu;

int dijkstra(gr graph, unordered_map<string, int> cost, string start, string goal)
{
    cost[start] = 0;
    pr_qu pq;
    int w, wgt;
    string v, nbr;
    char l, ltr;
    pq.push(make_tuple(0, start, ' '));
    while (!pq.empty()) {
        tie(w, v, l) = pq.top();
        pq.pop();
        if (v == goal) {
            break;
        }
        for (tp t: graph[v]) {
            tie(wgt, nbr, ltr) = t;
            if (ltr != l && cost[v] + wgt < cost[nbr]) {
                cost[nbr] = cost[v] + wgt;
                pq.push(make_tuple(cost[nbr], nbr, ltr));
            }
        }
    }
    return cost[goal];
}

int main()
{
    int n, i, res, inf = INF;
    string fr, to, a, b, w;
    while (cin >> n) {
        if (n == 0) {
            break;
        }
        cin >> fr >> to;
        gr graph;
        unordered_map<string, int> cost;
        cost[fr] = cost[to] = inf;
        for (i = 0; i < n; i++) {
            cin >> a >> b >> w;
            graph[a].push_back(make_tuple(w.length(), b, w[0]));
            graph[b].push_back(make_tuple(w.length(), a, w[0]));
            cost[a] = cost[b] = inf;
        }
        res = dijkstra(graph, cost, to, fr);
        if (res < inf) {
            cout << res << '\n';
        } 
        else {
            cout << "impossivel\n";
        }
    }
    return 0;
}