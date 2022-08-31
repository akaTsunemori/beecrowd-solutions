def perform_sum(a, b) -> int:
    if a == b:
        return 0
    a, b = bin(a).replace('b', '0', 1), bin(b).replace('b', '0', 1)
    if len(a) < len(b):
        a, b = b, a
    res = ['0' for i in range(len(a))]
    for i in range(-1, -len(b), -1):
        if a[i] != b[i]:
            res[i] = '1'
    if len(a) > len(b):
        for i in range(-len(b), -len(a), -1):
            if a[i] == '1':
                res[i] = '1'
    return int(''.join(res), 2)


def main() -> None:
    while True:
        try:
            a, b = input().split()
            a, b = int(a), int(b)
        except EOFError:
            break
        print(perform_sum(a, b))


if __name__ == '__main__':
    main()