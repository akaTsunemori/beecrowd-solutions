def main() -> None:
    n, m = [int(i) for i in input().split()]
    matrix = [[int(i) for i in input().split()] for _ in range(n)]
    max_lines = max([sum(i) for i in matrix])
    max_colums = float('-inf')
    for i in range(m):
        max_colums = max(max_colums, sum([j[i] for j in matrix]))
    print(max(max_lines, max_colums))


if __name__ == '__main__':
    main()
