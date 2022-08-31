while True:
    n = int(input())

    if n == 0:
        break

    length = n // 2
    max_count = 1
    odd = False

    if n % 2 != 0:
        odd = True
        length += 1

    matrix = [[1 for i in range(n)] for i in range(length)]

    for i in range(length):
        count = 1

        for j in range(n // 2):
            matrix[i][j] = count

            if count != max_count:
                count += 1

        count = 1

        for j in range(n - 1, n // 2 - 1, -1):
            matrix[i][j] = count

            if count != max_count:
                count += 1

        max_count += 1

    if odd:
        matrix[n // 2][n // 2] = length

    for i in matrix:
        r = ' '
        print(r.join([f'{j:3}' for j in i]))

    for i in range(n // 2 - 1, -1, -1):
        r = ' '
        print(r.join([f'{j:3}' for j in matrix[i]]))

    print('')