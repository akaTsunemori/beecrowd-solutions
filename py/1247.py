while True:
    try:
        d, vf, vg = map(int, input().split())

        if vg / ((12 ** 2 + d ** 2) ** 0.5) >= vf / 12:
            print('S')

        else:
            print('N')

    except EOFError:
        break