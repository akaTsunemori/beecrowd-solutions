def fib(n):
    f = [0, 1]

    for i in range(2, n + 1):
        f.append(f[i - 1] + f[i -2])

    return f


n = int(input())
fibs = fib(41)

for _ in range(n):
    i = int(input())
    print(f'fib({i}) = {2 * fibs[i + 1] - 2} calls = {fibs[i]}')