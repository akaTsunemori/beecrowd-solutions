def aot():
    n, x = [int(i) for i in input().split()]
    titans = input()
    p, m, g = [int(i) for i in input().split()]
    walls = [x for _ in range(n)]
    i, j, k = 0, 0, 0

    for t in titans:
        if t == 'P':
            while walls[i] < p: i += 1
            walls[i] -= p

        elif t == 'M':
            while walls[j] < m: j += 1
            walls[j] -= m

        else:
            while walls[k] < g: k += 1
            walls[k] -= g

    print(sum([1 for w in walls if w < x]))


aot()