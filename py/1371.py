while True:
    n = int(input())

    if n == 0:
        break

    print(*(i ** 2 for i in range(1, int(n ** 0.5) + 1)))