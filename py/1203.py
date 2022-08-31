from sys import stdin, stdout


def main() -> None:
    readline = stdin.readline
    write = stdout.write
    while True:
        try:
            r, k = readline().split()
            r = int(r)
            k = int(k)
        except ValueError:
            break
        freqs = [0] * r
        ks = [False] * (k + 1)
        ks[0] = True
        for _ in range(k):
            a, b = readline().split()
            a = int(a)
            b = int(b)
            freqs[a - 1] += 1
            freqs[b - 1] += 1
        for i in freqs:
            for j in range(k, i - 1, -1):
                if ks[j - i]:
                    ks[j] = True
        if ks[k]:
            write('S\n')
        else:
            write('N\n')


if __name__ == '__main__':
    main()
