while True:
    try:
        number = int(input())
        difficulties = [int(i) for i in input().split()]
        a, b = 0, sum(difficulties)
        result = 10000000

        for i in range(number):
            a += difficulties[i]
            b -= difficulties[i]
            c = abs(a - b)

            if c < result:
                result = c

        print(result)

    except EOFError:
        break