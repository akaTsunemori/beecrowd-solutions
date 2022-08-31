from collections import defaultdict


class Graph:
    def __init__(self, vertices) -> None:
        self.vertices = vertices
        self.graph = defaultdict(list)

    def add_edge(self, f, t):
        self.graph[f].append(t)

    def dfs(self, vertex, visited):
        visited[vertex] = True
        for i in self.graph[vertex]:
            if not visited[i]:
                self.dfs(i, visited)

    def get_transposed(self):
        graph = Graph(self.vertices)
        for i in self.graph:
            for j in self.graph[i]:
                graph.add_edge(j, i)
        return graph

    def is_strongly_connected(self):
        visited = [False] * self.vertices
        self.dfs(0, visited)
        for i in visited:
            if not i:
                return False
        graph_transp = self.get_transposed()
        visited = [False] * self.vertices
        graph_transp.dfs(0, visited)
        for i in visited:
            if not i:
                return False
        return True


def main() -> None:
    while True:
        n, m = [int(i) for i in input().split()]
        graph = Graph(n)
        if n == 0 and m == 0:
            break
        for _ in range(m):
            v, w, p = [int(i) for i in input().split()]
            v -= 1
            w -= 1
            graph.add_edge(v, w)
            if p == 2:
                graph.add_edge(w, v)
        print(int(graph.is_strongly_connected()))


if __name__ == '__main__':
    main()