def stack(n):
    a = [i for i in range(1, n + 1)]
    b = []

    while len(a) > 1:
        b.append(a.pop(0))
        a.append(a[0])
        a.pop(0)

    print('Discarded cards:', end=' ')
    print(*b, sep=', ')
    print('Remaining card:', a[0])


while True:
    n = int(input())

    if n == 0:
        break

    stack(n)