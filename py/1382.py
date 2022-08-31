def main():
    n = int(input())

    for _ in range(n):
        m = int(input())
        positions = list(enumerate([int(i) for i in input().split()]))
        positions.sort(key=lambda a: a[1])
        visited = {k:False for k in range(m)}
        count = 0

        for i in range(m):
            if visited[i] or positions[i][0] == i:
                continue

            steps = 0
            j = i

            while not visited[j]:
                visited[j] = True
                j = positions[j][0]
                steps += 1

            if steps > 0:
                count += steps - 1

        print(count)


if __name__ == '__main__':
    main()