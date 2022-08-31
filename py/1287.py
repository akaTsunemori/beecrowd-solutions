while True:
    try:    
        string = input()
        result = ''
        flag = True

        for i in string:
            if i.isnumeric():
                result += i

            elif i == 'O' or i == 'o':
                result += '0'

            elif i == 'l':
                result += '1'

            elif i != ',' and i != ' ':
                flag = False
                break

        if flag and result != '':
            result = int(result)

            if result <= 2147483647:
                print(result)

            else:
                print('error')

        else:
            print('error')

    except EOFError:
        break