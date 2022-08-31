MAX = 10001


def is_valid_edge(u, v, mst):
    if u == v:
        return False
    if (mst[u] and mst[v]) or (not mst[u] and not mst[v]):
        return False
    return True


def prims(graph, vertices):
    in_mst = [False] * vertices
    in_mst[0] = True
    edge_count = 0
    min_cost = 0
    while edge_count < vertices - 1:
        min_w = MAX
        a = b = -1
        for i in range(vertices):
            for j in range(vertices):
                if graph[i][j] < min_w:
                    if is_valid_edge(i, j, in_mst):
                        min_w = graph[i][j]
                        a = i
                        b = j
        if a != -1 and b != -1:
            edge_count += 1
            min_cost += min_w
            in_mst[a] = in_mst[b] = True
    return min_cost


def main():
    r, c = [int(i) for i in input().split()]
    graph = [[MAX for _ in range(r)] for  _ in range(r)]
    for _ in range(c):
        v, w, p = [int(i) for i in input().split()]
        v -= 1
        w -= 1
        graph[v][w] = p
        graph[w][v] = p
    print(prims(graph, r))


if  __name__ == '__main__':
    main()
