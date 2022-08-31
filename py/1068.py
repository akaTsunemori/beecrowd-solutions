def balance(e):
    a, b = 0, 0

    for i in e:
        if i == '(':
            a += 1

        elif i == ')':
            b += 1

            if a < b:
                return False

    if a == b:
        return True

    return False


while True:
    try:
        expression = input()

        if balance(expression):
            print('correct')
        else:
            print('incorrect')

    except EOFError:
        break