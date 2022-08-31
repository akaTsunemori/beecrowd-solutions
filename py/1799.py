from collections import defaultdict
from collections import deque


graph = defaultdict(list)


def add_edge(a, b):
    graph[a].append(b)
    graph[b].append(a)


def bfs(fr, to):
    visited = set()
    queue = deque()
    queue.append([fr])
    while queue:
        path = queue.popleft()
        curr_v = path[-1]
        if curr_v not in visited:
            visited.add(curr_v)
            for nbr in graph[curr_v]:
                new_path = path.copy()
                new_path.append(nbr)
                queue.append(new_path)
                if nbr == to:
                    return new_path


def main():
    p, l = input().split()
    p, l = int(p), int(l)
    for _ in range(l):
        a, b = input().split()
        add_edge(a, b)
    route_1 = bfs('Entrada', '*')
    route_2 = bfs('*', 'Saida')
    print(len(route_1) + len(route_2) - 2)


if __name__ == '__main__':
    main()
