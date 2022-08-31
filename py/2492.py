def main():
    while True:
        abscissa = set()
        ordinate = set()
        is_func, is_inv = True, True
        n = int(input())

        if n == 0:
            break

        for _ in range(n):
            x, y = input().split(' -> ')
            
            if x in abscissa:
                is_func = False
            else:
                abscissa.add(x)

            if y in ordinate:
                is_inv = False
            else:
                ordinate.add(y)

        if not is_func:
            print('Not a function.')
        elif not is_inv:
            print('Not invertible.')
        else:
            print('Invertible.')


if __name__ == '__main__':
    main()