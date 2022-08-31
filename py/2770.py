while True:
    try:
        x, y, m = map(int, input().split())

        for _ in range(m):
            x2, y2 = map(int, input().split())

            if (x2 <= x and y2 <= y) or (x2 <= y and y2 <= x):
                print('Sim')

            else:
                print('Nao')

    except EOFError:
        break