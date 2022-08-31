def main():
    n, m = [int(i) for i in input().split()]
    matrix = []

    for _ in range(n):
        matrix.extend([i for i in input().split()])

    matrix.sort(key=lambda a: a[0], reverse=True)
    matrix.sort(key=lambda a: a[1], reverse=True)
    print(*matrix, sep='\n')


main()