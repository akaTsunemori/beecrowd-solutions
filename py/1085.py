from collections import defaultdict
from heapq import heapify, heappush, heappop
from sys import stdin, stdout


class Graph:
    def __init__(self) -> None:
        self.graph = defaultdict(list)

    def add_edge(self, a, b, w) -> None:
        self.graph[a].append((len(w), b, w[0]))
        self.graph[b].append((len(w), a, w[0]))


def dijkstra(graph, cost, start, goal) -> int:
    pq = []
    heapify(pq)
    heappush(pq, (0, start, '-'))
    cost[start] = 0
    while pq:
        _, v, l = heappop(pq)
        if v == goal:
            break
        for wgt, nbr, ltr in graph[v]:
            if ltr != l and cost[v] + wgt < cost[nbr]:
                cost[nbr] = cost[v] + wgt
                heappush(pq, (cost[nbr], nbr, ltr))
    return cost[goal]


def main() -> None:
    input = stdin.readline
    print = stdout.write
    while True:
        n = int(input())
        if n == 0:
            break
        gr = Graph()
        fr, to = input().split()
        cost = dict()
        cost[fr] = cost[to] = float('inf')
        for _ in range(n):
            a, b, w = input().split()
            gr.add_edge(a, b, w)
            cost[a] = cost[b] = float('inf')
        res = dijkstra(gr.graph, cost, to, fr)
        if res != float('inf'):
            print(str(res) + '\n')
        else:
            print('impossivel\n')


if __name__ == '__main__':
    main()
