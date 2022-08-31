a, b = map(int, input().split())

i = 1
while i < b:
    print(*range(i, i + a))
    i += a