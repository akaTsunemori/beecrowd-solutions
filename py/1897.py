from collections import deque


def op(a, i):
    if i == 0: return a * 2
    if i == 1: return int(a / 2)
    if i == 2: return a * 3
    if i == 3: return int(a / 3)
    if i == 4: return a + 7
    if i == 5: return a - 7


def bfs(origin: int, destination: int) -> int:
    if origin == destination:
        return 0
    graph = dict()
    queue = deque()
    queue.append(origin)
    graph[origin] = 0
    while len(graph) > 0:
        vertex = queue.popleft()
        for i in range(6):
            new_vertex = op(vertex, i)
            if new_vertex not in graph and vertex != new_vertex:
                queue.append(new_vertex)
                graph[new_vertex] = graph[vertex] + 1
            if destination in graph and graph[destination] > 0:
                return graph[destination]


def main() -> None:
    a, b = [int(i) for i in input().split()]
    print(bfs(a, b))


if __name__ == '__main__':
    main()