from math import floor

def drought():
    c = 0
    n = int(input())
    flag = False

    while n != 0:
        cons = dict()
        s = 0
        l = 0
        r = ''

        if flag:
            print('')

        for _ in range(n):
            try:
                x, y = [int(i) for i in input().split()]
                s += y
                l += x
                cons[y // x] += x

            except KeyError:
                cons[y // x] = x

        for i in range(201):
            try:
                r = "%s %s-%s" % (r, cons[i], i)

            except KeyError:
                continue

        c += 1
        print(f'Cidade# {c}:\n{r.lstrip()}')
        print(f'Consumo medio: {(floor((100 * s) / l) / 100):.2f} m3.')
        flag = True
        n = int(input())


if __name__ == "__main__":
    drought()