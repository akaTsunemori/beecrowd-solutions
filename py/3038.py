def main():
    sentence = input()
    result = [i for i in sentence]

    for i in range(len(result)):
        if result[i] == '@':
            result[i] = 'a'

        elif result[i] == '&':
            result[i] = 'e'

        elif result[i] == '!':
            result[i] = 'i'

        elif result[i] == '*':
            result[i] = 'o'

        elif result[i] == '#':
            result[i] = 'u'

    print(*result, sep='')


while True:
    try:
        main()

    except EOFError:
        break