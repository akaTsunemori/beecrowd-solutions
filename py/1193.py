def conversion():
    n = int(input())

    for i in range(1, n + 1):
        number, basis = input().split()
        print(f'Case {i}:')

        if basis == 'bin':
            print(int(number, 2), 'dec')
            print(hex(int(number, 2))[2:], 'hex')

        elif basis == 'hex':
            print(int(number, 16), 'dec')
            print(bin(int(number, 16))[2:], 'bin')

        else:
            print(hex(int(number))[2:], 'hex')
            print(bin(int(number))[2:], 'bin')

        print('')


conversion()