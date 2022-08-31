m = int(input())
flag = False

for _ in range(m):
    c, n = [int(i) for i in input().split()]
    keys = [int(i) for i in input().split()]
    mod = {i:[] for i in range(c)}

    if flag:
        print('')

    for i in keys:
        mod[i % c].append(i)

    for i in range(c):
        print(i, '-> ', end='')
        print(*mod[i], sep=' -> ', end='')
        print(' -> ' * (len(mod[i]) > 0) + '\\', end='\n')

    flag = True