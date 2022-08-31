n = int(input())
a, b = 0, 1
result = [0 for i in range(n)]

for i in range(1, n):
    result[i] = b
    a, b = b, a + b

print(*result)