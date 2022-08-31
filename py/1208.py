from sys import stdin, stdout
from collections import defaultdict


def dfs(graph, n, v, match, visited) -> bool:
    for i in graph[v]:
        if not visited[i]:
            visited[i] = True
            if not match[i] or dfs(graph, n, match[i], match, visited):
                match[i] = v
                return True
    return False


def main() -> None:
    input = stdin.readline
    print = stdout.write
    while True:
        try:
            n, m = input().split()
            n = int(n)
            m = int(m)
            gr = defaultdict(lambda: defaultdict(bool))
            for i in range(m):
                p, f = input().split()
                p = int(p)
                f = int(f)
                gr[p][f] = True
            res = 0
            match = defaultdict(bool)
            for i in gr:
                res += dfs(gr, n, i, match, defaultdict(bool))
            print(str(n - res) + '\n')
        except ValueError:
            break


if __name__ == '__main__':
    main()
