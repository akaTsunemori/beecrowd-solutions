def main() -> None:
    count = 1

    while True:
        n = int(input())
        if n == 0:
            break
        if count > 1:
            print('')
        results = [[0, 0, 0, 0] for _ in range(n)]
        for _ in range(n * (n - 1) // 2):
            x, y, z, w = [int(i) for i in input().split()]
            if y > w:
                results[x - 1][0] += 2
                results[z - 1][0] += 1
            else:
                results[x - 1][0] += 1
                results[z - 1][0] += 2
            results[x - 1][1] += y
            results[x - 1][2] += w
            results[z - 1][1] += w
            results[z - 1][2] += y
            results[x - 1][3] = x
            results[z - 1][3] = z
        results.sort(key=lambda a: 
            (a[0], a[1] / (a[2] + int(a[2] == 0)), a[1], -a[3]), reverse=True)
        print('Instancia', count)
        print(*[i[3] for i in results], sep=' ')
        count += 1


if __name__ == '__main__':
    main()