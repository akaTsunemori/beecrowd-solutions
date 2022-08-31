from sys import stdin


class Graph:
    def __init__(self, vertices) -> None:
        self.vertices = vertices
        self.graph = {i: set() for i in range(0, vertices + 1)}

    def add_edge(self, a, b) -> None:
        self.graph[a].add(b)
        self.graph[b].add(a)

    def get_cycles(self, vertice, visited, connected) -> None:
        visited[vertice] = True
        connected.append(vertice)
        for i in self.graph[vertice]:
            if not visited[i]:
                self.get_cycles(i, visited, connected)

    def get_transpose(self) -> object:
        graph = Graph(self.vertices)
        for i in self.graph:
            for j in self.graph[i]:
                graph.add_edge(j, i)
        return graph

    def fill_stack(self, vertice, visited, stack) -> None:
        visited[vertice] = True
        for i in self.graph[vertice]:
            if not visited[i]:
                self.fill_stack(i, visited, stack)
        stack.append(vertice)

    def get_sccs(self) -> list:
        stack = []
        visited = [False] * self.vertices
        for i in range(self.vertices):
            if not visited[i]:
                self.fill_stack(i, visited, stack)
        gr_transpose = self.get_transpose()
        visited = [False] * self.vertices
        result = []
        while stack:
            i = stack.pop()
            if not visited[i]:
                connected = []
                gr_transpose.get_cycles(i, visited, connected)
                result.append(connected)
        return result


def main() -> None:
    input = stdin.readline
    n = int(input())
    for case in range(n):
        vertices, connections = [int(i) for i in input().split()]
        gr = Graph(vertices)
        for j in range(connections):
            a, b = [int(ord(i) - 97) for i in input().split()]
            gr.add_edge(a, b)
        result = gr.get_sccs()
        result = sorted([sorted(i) for i in result])
        result = [[chr(i + 97) for i in j] for j in result]
        print(f'Case #{case + 1}:')
        for i in result:
            print(*i, '', sep=',')
        print(f'{len(result)} connected components\n')


if __name__ == '__main__':
    main()
