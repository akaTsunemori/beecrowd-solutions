def fibonacci(x):
    a, b, c = 0, 1, 0

    if x < 2:
        return x

    else:
        for i in range(x - 1):
            c = a + b
            c %= 1000
            a = b
            b = c

        return c

t = int(input())

for i in range(t):
    n = 0
    binary  = input()

    for j in binary:
        n *= 2
        n += int(j)
        n %= 1500

    print(f'{(fibonacci(n)):03}')