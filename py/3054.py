def superCool(aux, length):
    result = 0
    index = 0
    a = [0 for i in range(length)]
    b = [0 for i in range(length)]
    length -= 1

    for i in range(length):
        l = i

        while index > 0 and aux[i] < b[index - 1]:
            result = max(result, (i - a[index - 1] + 1) * (b[index - 1] + 1))
            l = a[index - 1]
            index -= 1

        b[index] = aux[i]
        a[index] = l
        index += 1

    while index > 0:
        result = max(result, (length - a[index - 1] + 1) * (b[index - 1] + 1))
        index -= 1

    return result

l, c = map(int, input().split())
result = 0
matrix = []
aux = [0 for i in range(c)]

for _ in range(l):
    matrix.append([int(i) for i in input().split()])

for i in range(l - 1):
    for j in range(c - 1):
        if matrix[i][j] + matrix[i + 1][j + 1] <= matrix[i][j + 1] + matrix[i + 1][j]:
            aux[j] += 1
        else:
            aux[j] = 0

    result = max(result, superCool(aux, c))

print(result)