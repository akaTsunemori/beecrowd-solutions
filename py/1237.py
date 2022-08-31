while True:
    try:
        a, b = input(), input()

        if len(a) < len(b):
            a, b = b, a

        length = len(b)
        result = 0

        for i in range(length):
            partial = 0
            count = i
            substring = b[i]

            for j in range(i, length):
                if substring not in a:
                    if result < partial:
                        result = partial

                    break

                partial += 1

                if len(b) - 1 == j:
                    if result < partial:
                        result = partial

                    break

                count += 1
                substring += b[count]

        print(result)

    except EOFError:
        break