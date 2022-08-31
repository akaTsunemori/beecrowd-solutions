def main():
    string = input()
    a, b = 0, 0

    for i in string:
        if i == '(':
            a += 1
        elif b < a:
            b += 1

    if a != b:
        print(f'Ainda temos {a - b} assunto(s) pendente(s)!')
    else:
        print('Partiu RU!')


main()