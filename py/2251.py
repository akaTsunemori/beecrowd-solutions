case = 1

while True:
    n = int(input())

    if n == 0:
        break

    print(f'Teste {case}\n{2 ** n - 1}\n')
    case += 1