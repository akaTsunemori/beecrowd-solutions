while True:
    d, n = input().split()

    if d == '0' and n == '0':
        break

    n = n.replace(d, '')

    print(0 if n == '' else int(n))