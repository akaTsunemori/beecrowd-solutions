def isItDivisible(n):
    if int(n, 2) % 131071 == 0:
        print('YES')

    else:
        print('NO')


n = ''

while True:
    try:
        m = input()

        if m[-1] == '#':
            m = m.replace('#', '')
            n += m

            isItDivisible(n)
            n = ''

        else:
            n += m

    except EOFError:
        break