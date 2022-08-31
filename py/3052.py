from collections import deque


def main() -> None:
    n, m = input().split()
    n, m = int(n), int(m)
    matrix = [[i for i in input()] for j in range(n)]
    queue = deque()
    queue.append((0, matrix[0].index('o')))
    while queue:
        i, j = queue.popleft()
        if i + 1 < n and matrix[i + 1][j] == '#':
            if j + 1 < m and matrix[i][j + 1] == '.':
                matrix[i][j + 1] = 'o'
                queue.append((i, j + 1))
            if j - 1 > -1 and matrix[i][j - 1] == '.':
                matrix[i][j - 1] = 'o'
                queue.append((i, j - 1))
        if i + 1 < n and matrix[i + 1][j] == '.':
            matrix[i + 1][j] = 'o'
            queue.append((i + 1, j))
    for i in matrix:
        print(''.join(i))


if __name__ == '__main__':
    main()
