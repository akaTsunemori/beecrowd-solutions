class Graph:
    def __init__(self, v) -> None:
        self.graph = [[False for i in range(v)] for j in range(v)]
        self.v = v
        self.visited = set()

    def add_edge(self, a, b) -> None:
        self.graph[a][b] = True
        self.graph[b][a] = True

    def dfs(self, start) -> int:
        edges = 0
        v = self.v
        self.visited.add(start)
        for i in range(v):
            if self.graph[start][i] and i not in self.visited:
                edges += self.dfs(i) + 1
        return edges


def main() -> None:
    n = int(input())
    for _ in range(n):
        start = int(input())
        v, a = input().split()
        v, a = int(v), int(a)
        gr = Graph(v)
        for __ in range(a):
            fr, to = input().split()
            fr, to = int(fr), int(to)
            gr.add_edge(fr, to)
        print(2 * gr.dfs(start))


if __name__ == '__main__':
    main()
