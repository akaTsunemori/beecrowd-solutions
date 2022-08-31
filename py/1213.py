while True:
    try:
        n = int(input())
        ones = 1
        count = 1

        while ones % n != 0:
            ones = (10 * ones + 1) % n
            count += 1

        print(count)

    except EOFError:
        break